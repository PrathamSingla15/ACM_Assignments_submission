#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }

        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
