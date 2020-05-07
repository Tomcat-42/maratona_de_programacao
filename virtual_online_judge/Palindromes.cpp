#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

const map<char, char> reverseMap = {
    {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'},
    {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'}, {'U', 'U'}, {'V', 'V'},
    {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'},
    {'3', 'E'}, {'5', 'Z'}, {'8', '8'},
};

bool isPalin(string word) {
    int i, j;
    for (i = 0, j = word.size() - 1; i <= j; i++, j--)
        if (word[i] != word[j]) return false;

    return true;
}

bool isMirror(string word) {
    string copyStr(word);

    transform(word.begin(), word.end(), copyStr.begin(), [](char i) -> char {
        map<char, char>::const_iterator j = reverseMap.find(i);
        if (j != reverseMap.end())
            return (*j).second;
        else
            return '-';
    });
    reverse(copyStr.begin(), copyStr.end());
    //cout << word << " " << copyStr << endl;
    return copyStr == word;
}

int main(int argc, char **argv) {
    string word;
    bool palin, mirror;

    while (cin >> word) {
        palin = isPalin(word);
        mirror = isMirror(word);

        cout << word << " -- ";
        if (palin && mirror) {
            cout << "is a mirrored palindrome.";
        } else if (palin) {
            cout << "is a regular palindrome.";
        } else if (mirror) {
            cout << "is a mirrored string.";
        } else {
            cout << "is not a palindrome.";
        }
        cout << "\n\n";
    }

    return 0;
}
