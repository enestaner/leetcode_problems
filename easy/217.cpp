#include "headers.hpp"

/* CONTAINS DUPLICATE

Given an integer array nums, return **true** if any value appears at least twice in the array, and return **false** if every element is distinct.

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //If the size of the array is 1, then return false
        if(nums.size() <= 1) return false;

        //Sort the array
        sort(nums.begin(), nums.end());


        //Iterate through the array and check if the element is equal to the next element or not
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};