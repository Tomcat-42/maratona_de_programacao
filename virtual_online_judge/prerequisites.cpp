// g++ -std=c++11 -Wall -lm -g -02 prerequisites.cpp -o prerequisites.out
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#define sws                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
    int k, m, input, n_course_cat, min_courses_cat, n_course_cat_feito;
    bool passou;
    unordered_set<int> fred_courses;
    vector<int> categ_courses;

    while ((cin >> k >> m) && k) {
        fred_courses.clear();
        for (int i = 0; i < k; i++) {
            cin >> input;
            fred_courses.insert(input);
        }

        passou = true;
        for (int i = 0; i < m; i++) {
            categ_courses.clear();
            cin >> n_course_cat >> min_courses_cat;
            for (int j = 0; j < n_course_cat; j++) {
                cin >> input;
                categ_courses.push_back(input);
            }

            if (passou) {
                n_course_cat_feito = 0;
                for (int l = 0; l < n_course_cat; l++) {
                    if (fred_courses.count(categ_courses[l]))
                        n_course_cat_feito++;

                    if (n_course_cat_feito == min_courses_cat) break;
                }
            }

            if (n_course_cat_feito < min_courses_cat) passou = false;
        }

        cout << (passou ? "yes" : "no") << endl;
    }

    return 0;
}
