#include "headers.h"

// CONTAINS DUPLICATE

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Sort the array
        sort(nums.begin(), nums.end());

        //If the size of the array is 1, then return false
        if(nums.size() == 1) return false;

        //Iterate through the array and check if the element is equal to the next element or not
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};