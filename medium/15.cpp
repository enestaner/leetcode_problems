#include "headers.hpp"

/*
3SUM

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        // sort the array
        sort(nums.begin(), nums.end());

        // iterate through the array
        for(int i=0; i < nums.size()-2; i++){
            // skip duplicates
            if(i != 0 && nums[i] == nums[i-1]) continue;

            // two pointer approach
            for(int k = i+1, j=nums.size()-1; k < j;){        
                int temp = nums[k] + nums[j] + nums[i];
                // if sum is 0, add to result
                if(temp == 0){
                    res.push_back({nums[i], nums[k], nums[j]});
                    k++;
                    j--;
                    // skip duplicates
                    for(; k < j && nums[k] == nums[k-1]; k++);
                }
                // if sum is greater than 0, decrement j
                else if(temp > 0) j--;
                // if sum is less than 0, increment k
                else if(temp < 0) k++;
            }
        }
        return res;
    }
};