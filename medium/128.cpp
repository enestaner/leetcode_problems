#include "headers.hpp"

/*
LONGEST CONSECUTIVE SEQUENCE

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int> pq;
        int length = 1, temp = 1;

        if(nums.size() == 0) return 0;

        // push all elements into the priority queue
        for(auto& i:nums) pq.push(i);

        
        for(int i = 0; i < nums.size(); i++){
            int num = pq.top();
            pq.pop();
            // if the difference between the top element and the next element is 1, increment temp
            if(num - pq.top() == 1) temp++;
            // if the difference is not 1, check if the element is the same as the top element
            else if(num == pq.top()) continue;
            // if the difference is not 1 and the element is not the same as the top element, reset temp
            else temp = 1;
            // if temp is greater than length, set length to temp
            temp > length ? length = temp : 0;
        }
        return length;
    }
};