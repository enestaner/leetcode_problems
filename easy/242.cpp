#include "headers.h"

//VALID ANAGRAM

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;

        //If the size of the strings are not equal, then return false
        if(s.size() != t.size()) return false;

        //Insert all the elements of the first string in the map
        for(char i:s) mp[i]++;

        //Subtract the elements of the second string from the map
        for(char i:t) mp[i]--;

        //If the map has any element other than 0, then return false
        for(auto& i:mp){
            if(i.second != 0) return false;
        }
        return true;
    }
};