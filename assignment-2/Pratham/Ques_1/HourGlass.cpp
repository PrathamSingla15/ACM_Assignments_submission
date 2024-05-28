#include <iostream>
using namespace std;

void printHourglass(int n) {
    // Print upper half of hourglass
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print lower half of hourglass
    for (int i = 2; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (odd number): ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << "Please enter an odd number of rows.";
        return 1;
    }
    
    printHourglass(n);
    
    return 0;
}
