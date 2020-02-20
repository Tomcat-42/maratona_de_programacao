#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/* Distância entre dois pontos */
double distPointPoint(pair<int, int> p1, pair<int, int> p2) {
    return (sqrt(pow((p2.second - p1.second), 2.0) +
                 pow((p2.first - p1.first), 2.0)));
}
/* Distância entre um ponto e uma linha definida por dois pontos */
double distPointLine(pair<int, int> Lp1, pair<int, int> Lp2,
                     pair<int, int> p0) {
    // return abs(((Lp2.second - Lp1.second) * p0.first) -
    //           ((Lp2.first - Lp1.first) * p0.second) +
    //           (Lp2.first * Lp1.second) - (Lp2.second * Lp1.first)) /
    //       distPointPoint(Lp1, Lp2);

    return abs(((Lp2.first - Lp1.first) * (Lp1.second - p0.second)) -
               (Lp1.first - p0.first) * (Lp2.second - Lp1.second)) /
           distPointPoint(Lp1, Lp2);
}

bool intersect(pair<int, int> XYretan, int w, int h, pair<int, int> XYmagia,
               int raio) {
    /* O centro do círculo está dentro do retângulo */
    if ((XYmagia.first >= XYretan.first) &&
        (XYmagia.first <= (XYretan.first + w)) &&

        (XYmagia.second >= (XYretan.second)) &&
        (XYmagia.second <= (XYretan.second + h)))
        return true;

    const vector<pair<int, int>> vertices = {
        {XYretan.first, XYretan.second},
        {XYretan.first + w, XYretan.second},
        {XYretan.first, XYretan.second + h},
        {XYretan.first + w, XYretan.second + h},
    };

    /* A distância entre o centro do círculo e um dos lados é menor que o raio
     */
    if ((XYmagia.first >= XYretan.first) &&
        (XYmagia.first <= (XYretan.first + w)) &&
        min(distPointLine(vertices[0], vertices[1], XYmagia),
            distPointLine(vertices[2], vertices[3], XYmagia)) <= raio)
        return true;

    else if ((XYmagia.second >= XYretan.second) &&
             (XYmagia.second <= (XYretan.second + h)) &&
             min(distPointLine(vertices[0], vertices[2], XYmagia),
                 distPointLine(vertices[1], vertices[3], XYmagia)) <= raio)
        return true;

    else {
        /* A distância entre o centro do círculo e um dos vértices
         * é menor que o raio do círculo */
        for (auto i : vertices) {
            if (distPointPoint(i, XYmagia) <= raio) return true;
        }
    }

    /* Não há intersecção */
    return false;
}

int main(int argc, char **argv) {
    pair<int, int> XYretan, XYmagia;
    int w, h, lvl, n;
    char magia[6];

    const unordered_map<string, pair<int, vector<int>>> table = {
        {"fire", {200, {20, 30, 50}}},
        {"water", {300, {10, 25, 40}}},
        {"earth", {400, {25, 55, 70}}},
        {"air", {100, {18, 38, 60}}},
    };

	scanf("%d", &n);
    while (n--) {
		scanf("%d %d %d %d", &w, &h, &XYretan.first, &XYretan.second);
		getchar();
		scanf("%s %d %d %d", magia, &lvl, &XYmagia.first, &XYmagia.second);
		getchar();

        if (intersect(XYretan, w, h, XYmagia,
                      (table.at(magia).second)[lvl - 1]))
            cout << table.at(magia).first << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
