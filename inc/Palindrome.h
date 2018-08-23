//
// Created by alonso on 8/22/18.
//

#ifndef PALINDROME_PALINDROME_H
#define PALINDROME_PALINDROME_H

#include <algorithm>
#include <iostream>
#include <stack>


# define REMOVE_SPACES(x) x.erase(std::remove(x.begin(), x.end(), ' '), x.end())

class Palindrome {
public:
    static bool isPalindrome(const std::string& word)
    {
        bool isPalindrome = false;
        std::stack<char> stack;
        std::string backwards;
        std::string forwad = word;
        REMOVE_SPACES(forwad);

        for (int i = 0; i < word.length(); i++)
            stack.push(word[i]);
        for (int i = 0; i < word.length(); i++) {
            backwards[i] = stack.top();
            stack.pop();
        }
        for (int i = 0; word[i] != '\0'; i++){
            if (tolower(word[i]) == tolower(backwards[i]))
                isPalindrome = true;
            else isPalindrome = false;
        }
        return isPalindrome;
    }

};


#endif //PALINDROME_PALINDROME_H
