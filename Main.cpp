#include "mat.hpp"
// #include <iostream>
// #include <string>

int main() {
    int columns, rows;
    char symbol1, symbol2;
    cout << "Enter a number for columns: ";
    cin >> columns;
    cout << "Enter a number for columns: ";
    cin >> rows;
    cout << "Enter the first symbol: ";
    cin >> symbol1;
    cout << "Enter the the second symbol: ";
    cin >> symbol2;
    cout << endl;

    cout << ariel::mat(columns, rows, symbol1, symbol2);
}