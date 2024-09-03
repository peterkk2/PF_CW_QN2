#include <iostream>
#include <vector>
#include <algorithm>

void printDivisors(int n) {
    std::vector<int> divisors;
   
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
   
    std::reverse(divisors.begin(), divisors.end());
   
    for (std::vector<int>::size_type i = 0; i < divisors.size(); ++i) {
        std::cout << divisors[i] << std::endl;
    }
}

int main() {
    int number;
    char choice;
   
    std::cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << std::endl;
    std::cout << "The program will repeatedly prompt you to enter a positive integer." << std::endl;
    std::cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << std::endl;
    std::cout << std::endl;
   
    while (true) {
        std::cout << "Please enter a positive integer: ";
        std::cin >> number;
       
        if (number <= 0) {
            if (number < 0) {
                std::cout << number << " is not a positive integer." << std::endl;
            } else {
                std::cout << "0 is not a positive integer." << std::endl;
            }
            continue;  
        }
       
        printDivisors(number);
       
        while (true) {
            std::cout << "Would you like to see the divisors of another integer (Y/N)? ";
            std::cin >> choice;
           
            if (choice == 'Y' || choice == 'y') {
                break;
            } else if (choice == 'N' || choice == 'n') {
                return 0; 
            } else {
                std::cout << "Please respond with Y (or y) for yes and N (or n) for no." << std::endl;
            }
        }
    }
   
    return 0;
}
