#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

typedef struct Contestant {
    map<int, int> problemas;
    set<int> solved;
    int penalidade;
} contestant;

int main(int argc, char **argv) {
    map<int, contestant> contestants;
    int id_contestant, id_problema, tempo;
    char status_p;
    int cases;
    string line;

    cin >> cases;
    cin >> ws;
    for (int i = 0; i < cases; i++) {
        contestants.clear();
        while (getline(cin, line) && line.size()) {
            istringstream lineStream(line);
            contestant tmp;
            tmp.penalidade = 0;
            lineStream >> id_contestant >> id_problema >> tempo >> status_p;
            auto procuraContestant = contestants.find(id_contestant);

            if (procuraContestant != contestants.end()) {
                tmp = procuraContestant->second;
            }

            if (status_p == 'I') {
                auto prob = tmp.problemas.find(id_problema);

                if ((prob != tmp.problemas.end()) && prob->second != -1) {
                    tmp.problemas[id_problema]++;
                } else {
                    tmp.problemas[id_problema] = 1;
                }
            } else if (status_p == 'C') {
                auto prob = tmp.problemas.find(id_problema);

                if ((prob != tmp.problemas.end()) && prob->second != -1) {
                    tmp.penalidade += (prob->second * 20) + tempo;
                    prob->second = -1;
                } else {
                    tmp.problemas[id_problema] = -1;
                    tmp.penalidade += tempo;
                }

                tmp.solved.insert(id_problema);
            }
            contestants[id_contestant] = tmp;
        }
        vector<pair<int, contestant>> cont_vec;
        copy(contestants.begin(), contestants.end(), back_inserter(cont_vec));

        sort(cont_vec.begin(), cont_vec.end(),
             [](pair<int, contestant> a, pair<int, contestant> b) {
                 if (a.second.solved.size() == 0 &&
                     b.second.solved.size() == 0) {
                     return a.first < b.first;
                 } else if (a.second.solved.size() == b.second.solved.size()) {
                     return a.second.penalidade < b.second.penalidade;
                 } else {
                     return a.second.solved.size() > b.second.solved.size();
                 }
             });
        for (auto k : cont_vec) {
            cout << k.first << " " << k.second.solved.size() << " "
                 << k.second.penalidade << endl;
        }
        if (i < cases - 1) cout << endl;
    }
    return 0;
}
