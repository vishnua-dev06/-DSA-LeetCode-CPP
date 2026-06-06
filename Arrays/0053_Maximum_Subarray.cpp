/*
LeetCode 53 - Maximum Subarray

Given an integer array nums, find the contiguous subarray
with the largest sum and return its sum.

Example:
Input: [-2,1,-3,4,-1,2,1,-5,4]
Output: 6

Approach:
Kadane's Algorithm

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = nums[0];

        for (int num : nums) {
            currSum += num;
            maxSum = max(maxSum, currSum);

            if (currSum < 0)
                currSum = 0;
        }

        return maxSum;
    }
};
