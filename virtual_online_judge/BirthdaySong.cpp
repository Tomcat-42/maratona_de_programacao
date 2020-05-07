#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    int num, p_index, s_index;
    vector<string> person;
    string inp;
    string song[16] = {
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "you",
        "Happy", "birthday", "to", "Rujia",
        "Happy", "birthday", "to", "you",

    };

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> inp;
        person.push_back(inp);
    }

    for (p_index = 0, s_index = 0; p_index < num;
         p_index++, s_index = (s_index + 1) % 16) {
        
        cout << person[p_index] << ": " << song[s_index] << endl;
    }

    p_index = 0;
    while (s_index && s_index != 16) {
        cout << person[p_index] << ": " << song[s_index] << endl;
        p_index = (p_index + 1) % num;
        s_index++;
    }

    return 0;
}
