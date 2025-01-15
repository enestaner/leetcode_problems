#include "headers.hpp"

/* 
GROUP ANAGRAMS

Given an array of strings strs, group the anagrams together. You can return the answer in any order.
 
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> res;

        for(int i = 0; i < strs.size(); i++){
            //Sort the string and check if the sorted string is present in the map or not
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            auto it = mp.find(temp);

            //If the sorted string is not present in the map, then insert the string in the map and add the string in the result vector
            if(it == mp.end()){
                res.push_back({strs[i]});
                mp[temp] = res.size() - 1;
            }
            //If the sorted string is present in the map, then add the string in the result vector
            else{
                res[it->second].push_back(strs[i]);
            }
        }
        return res;
    }
};