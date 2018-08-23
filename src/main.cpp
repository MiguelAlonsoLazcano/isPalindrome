
#include <string>
#include <iostream>
#include "Palindrome.h"

int main() {

    std::cout << "Palindrome >> ";

    std::string word;
    std::cin >> word;
    (Palindrome::isPalindrome(word)) ? std::cout << "yes!" : std::cout << "nop";

    return 0;
}