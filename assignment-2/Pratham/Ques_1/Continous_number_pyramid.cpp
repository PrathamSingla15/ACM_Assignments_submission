#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    int number = 1;  // Initialize the starting number

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << number << " ";
            number++;  // Increment the number for the next position
        }
        std::cout << std::endl;
    }

    return 0;
}
