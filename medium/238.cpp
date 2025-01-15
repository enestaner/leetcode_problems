#include "headers.hpp"

/*
PRODUCT OF ARRAY EXCEPT SELF

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int m = nums.size();
        //creating two vectors to store the product of all elements to the left and right of the current element
        vector<int> left(m, nums[0]), right(m, nums[m-1]), res;

        //filling the left and right vectors
        for(int i=1; i < m; i++) left[i] = left[i-1] * nums[i];
        for(int i=m-2; i >= 0; i--) right[i] = right[i+1] * nums[i];

        //calculating the product of all elements to the left and right of the current element
        for(int i=0; i < m; i++){
            if(i==0) res.push_back(1 * right[i+1]);
            else if(i==m-1) res.push_back(1 * left[i-1]);
            else res.push_back(left[i-1] * right[i+1]);
        }
        return res;
    }
};