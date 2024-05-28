#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i) {
        // Print leading spaces
        for(int j = 1; j <= (rows - i); ++j) {
            cout << " ";
        }
        // Print stars for the current row
        for(int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
