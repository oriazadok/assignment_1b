#include "mat.hpp"

int main() {
    
    cout << ariel::mat(1, 1, '%', '*') << endl;
    cout << ariel::mat(7, 1, '!', '#') << endl;
    cout << ariel::mat(1, 7, '#', '^') << endl;
    cout << ariel::mat(5, 3, '#', '^') << endl;
    cout << ariel::mat(3, 5, '#', '^') << endl;
    
    try {
		cout << ariel::mat(10, 5, '$', '%') << endl;
        cout << ariel::mat(2, 10, '%', '*') << endl;
        cout << ariel::mat(-2, -9, '$', '%') << endl;
        cout << ariel::mat(0, 0, '$', '%') << endl;
        cout << ariel::mat(0, 1, '%', '*') << endl;
        cout << ariel::mat(1, 0, '%', '*') << endl;
        cout << ariel::mat(-4, 9, '%', '*') << endl;
        cout << ariel::mat(1, -3, '%', '*') << endl;
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
	}
}