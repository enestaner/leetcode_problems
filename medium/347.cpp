#include "headers.h"

/* 
TOP K FREQUENT ELEMENTS

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
 
        // Custom comparator for priority queue
        struct myComp {
            constexpr bool operator()(
                pair<int, int> const& a,
                pair<int, int> const& b)
                const noexcept
            {
                return a.second < b.second;
            }
        };

        // Priority queue with custom comparator
        priority_queue<pair<int, int>, vector<pair<int,int>>, myComp> p1;

        // Count frequency of each element
        for(auto& i:nums){
            auto it = mp.find(i);

            if(it == mp.end()) mp[i] = 1;
            else mp[i]++;
        }

        // Push elements into priority queue
        for(auto& i:mp){
            p1.push(i);
        }

        // Pop k elements from priority queue
        for(int i = 0; i < k; i++){
            auto it = p1.top();
            res.push_back(it.first);
            p1.pop();
        }
        return res;
    }
};