#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user to enter the number of rows for the triangle
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Loop through each row
    for(int i = 1; i <= rows; ++i) {
        // Print stars for the current row
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
