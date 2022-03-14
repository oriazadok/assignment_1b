#include "mat.hpp"
using namespace std;

//small than 33 
string ariel::mat(int columns, int rows, char a, char b) {
    const int minValue = 33;
    const int maxValue = 126;
    if((columns <= 0)  || (rows <= 0) || (columns % 2 == 0) || (rows % 2 == 0)) {
        throw invalid_argument("Wrong input");
    }
    if(a < minValue || b < minValue || maxValue < a || maxValue < b) {
        throw invalid_argument("Wrong input");
    }
    string ans;
    int ss = 0;  // ss = stop swap
    bool pass = false;
    for (int i = 0; i < rows; i++) {
        string pre;
        string post;
        int swap = 1;
        for (int j = 0; j < columns / 2 + 1; j++) {
            string put;
            if (j <= ss) {
                if (swap == 1) {
                    put += a;
                    pre += a;
                    post.insert(0, put);
                }
                else {
                    put += b;
                    pre += b;
                    post.insert(0, put);
                }
                swap *= -1;
                continue;
            }
            if (i % 2 == 0) {
                put += a;
                pre += a;
                post.insert(0, put);
            }
            else {
                put += b;
                pre += b;
                post.insert(0, put);
            }
        }
        ans += pre + post.substr(1) + "\n";
        if (ss == rows / 2) {
            pass = true;
        }
        if ((ss < rows / 2) && (!pass)) {
            ss++;
        }
        else {
            ss--;
        }
    }
    return ans;
}