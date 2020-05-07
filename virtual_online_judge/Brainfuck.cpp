#include <algorithm>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

#define MEM_SIZE 100
#define MEM_CELL_SIZE 256

using namespace std;

int main(int argc, char **argv) {
    /* Fita de mem do brainfuck */
    int mem[MEM_SIZE];
    int mem_index;

    char op;
    string bf_str;

    int tests = 0;

    cin >> tests;
    cin.ignore(1, '\n');
    for (int c = 1; c <= tests; c++) {
        getline(cin, bf_str);
        fill(mem, mem + MEM_SIZE, 0);
        mem_index = 0;

        istringstream bf_stream(bf_str);
        while (bf_stream >> op) {
            switch (op) {
                case '>':
                    mem_index = (mem_index + 1) % MEM_SIZE;
                    break;
                case '<':
                    mem_index = ((mem_index - 1) + MEM_SIZE) % MEM_SIZE;
                    break;
                case '+':
                    mem[mem_index] = (mem[mem_index] + 1) % MEM_CELL_SIZE;
                    break;
                case '-':
                    mem[mem_index] =
                        ((mem[mem_index] - 1) + MEM_CELL_SIZE) % MEM_CELL_SIZE;
                    break;
            }
        }

        cout << "Case " << c << ": ";
        for (int k = 0; k < MEM_SIZE; k++) {
            printf("%02X%s", mem[k], (k == MEM_SIZE - 1) ? "\n" : " ");
        }
    }

    return 0;
}
