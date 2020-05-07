#include <cstdio>
#include <iostream>
#include <vector>
#define TIME_MAX (60 * 60 * 5)
#define MIN 60
#define HR (60 * 60)

enum { VERMELHO, VERDE, LARANJA } ESTATE;

using namespace std;

class semaforo {
    int ciclo;
    int tempo;
    int estado;

   public:
    semaforo(int c) {
        ciclo = c;
        tempo = 0;
        estado = VERMELHO;
    }

    void set_ciclo(int c) { ciclo = c; }
    int get_ciclo() { return ciclo; }
    int get_tempo() { return tempo; }

    void avanca() {
        tempo++;
        if (estado == VERDE && tempo == ciclo - 5)
            estado = LARANJA;
        else if (estado == LARANJA && tempo == ciclo) {
            estado = VERMELHO;
            tempo = 0;
        } else if (estado == VERMELHO && tempo == ciclo) {
            estado = VERDE;
            tempo = 0;
        }
    }

    int get_status() { return estado; }
};

void avanca_sems(vector<semaforo> &a) {
    for (int i = 0; i < a.size(); i++) {
        a[i].avanca();
    }
}

bool check_sems(vector<semaforo> &a) {
    int s;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i].get_status() == VERMELHO && (a[i].get_tempo() == 0)))
            return false;
    }

    return true;
}
void print_sems(vector<semaforo> &a) {
    for (auto x : a) {
        int s = x.get_status();
        printf("CICLO:%d TEMPO:%d ESTADO:%s\n", x.get_ciclo(), x.get_tempo(),
               (s == 0) ? "VERMELHO" : (s == 1) ? "VERDE" : "LARANJA");
    }
}
int main(int argc, char **argv) {
    vector<semaforo> s;
    semaforo tmp(0);
    int input;
    int secs;
    bool sync;

    while (cin >> input && input) {
        s.clear();

        tmp.set_ciclo(input);
        s.push_back(tmp);
        while (cin >> input && input) {
            tmp.set_ciclo(input);
            s.push_back(tmp);
        }

        getchar();

        secs = 0;
        sync = false;
        while (true) {
            cout << "segundos: " << secs << endl;
            print_sems(s);
            if( secs > 2300)
                getchar();
            
            avanca_sems(s);
            secs++;
            if (secs > TIME_MAX) {
                sync = false;
                break;
            }

            if (check_sems(s)) {
                cout << "segundos: " << secs << endl;
                print_sems(s);
                sync = true;
                break;
            }
        }

        if (sync) {
            int h = secs / HR;
            int m = (secs - (h * HR)) / MIN;
            printf("00:%02d:%02d\n", h, m);
        } else {
            cout << "Signals fail to synchronize in 5 hours\n";
        }
    }
    return 0;
}
