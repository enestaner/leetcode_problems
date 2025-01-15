#include "headers.hpp"

/* TWO SUM

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> mp;
        vector<int> res;

        //If we got 2 elements, just return them cause they are provide the answer

        if(nums.size() == 2) return res={0,1};

        //Insert all elements in the map

        for(int i = 0; i < nums.size(); i++){
            mp.insert({nums[i], i});
        }

        //Iterate through the map and check if the element is present in the map or not

        for(int i = 0; i < nums.size(); i++){
            
            //If the element is present in the map, then check if the element is present 2 times or not
            if(mp.count(target - nums[i]) == 2){
                res.push_back(i);
                mp.erase(mp.find(nums[i]));
                res.push_back(mp.find(nums[i])->second);
                return res;
            }

            //If the element is present in the map, then push the index of the element in the result vector
            auto it = mp.find(target - nums[i]);

            if(it != mp.end() && it->second != i){
                res.push_back(i);
            }
        }
        return res;
    }
};