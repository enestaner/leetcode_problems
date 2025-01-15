#include "headers.hpp"

/*
Encode and Decode Strings

Design an algorithm to encode a list of strings to a single string. The encoded string is then decoded back to the original list of strings.
Please implement encode and decode

Input: ["neet","code","love","you"]
Output:["neet","code","love","you"]

*/

class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for(auto& i:strs){
            encoded.append(i);
            encoded += '\0';
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        string decoded;

        for(auto& i:s){
            if(i == '\0'){
                decoded_strs.push_back(decoded);
                decoded.erase();
                continue;
            }
            decoded += i;
        }
        return decoded_strs;
    }
};