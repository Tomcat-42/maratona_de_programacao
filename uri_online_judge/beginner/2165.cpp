#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string tweet;
    getline(cin, tweet);
    cout << (tweet.length() <= 140 ? "TWEET" : "MUTE") << endl;

    return 0;
}
