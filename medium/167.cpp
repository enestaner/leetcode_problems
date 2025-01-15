#include "headers.hpp"

/*
Two Sum II - Input array is sorted

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int temp;

        // two pointers
        for(int i=0, j=numbers.size()-1; i<j;){
            temp = numbers[i] + numbers[j];
            
            if(temp == target) return {i+1, j+1};
            // if sum is less than target, increment i
            else if(temp < target) i++;
            // if sum is greater than target, decrement j
            else j--;
        }
        return {0,0};
    }
};