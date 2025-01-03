#include "headers.h"

//VALID ANAGRAM

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;

        if(s.size() != t.size()) return false;

        for(char i:s) mp[i]++;

        for(char i:t) mp[i]--;

        for(auto& i:mp){
            if(i.second != 0) return false;
        }
        return true;
    }
};