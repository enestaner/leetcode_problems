#include "headers.hpp"

/*
VALID PALINDROME

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        // remove non-alphanumeric characters
        for(auto& c:s){
            if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) temp += c;
            else if(c >= 'A' && c <= 'Z') temp += c + 32;
        }

        // check if palindrome
        for(int i=0, j=temp.size()-1; i<j; i++, j--){
            if(temp[i] != temp[j]) return false;
        }
        return true;
    }
};