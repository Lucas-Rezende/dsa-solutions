#include "libs.hpp"

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currentSum = 0; int maxSum = 0; int aux = 0;

        if (nums.size() == 1) return nums[0];
        else {
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] < nums[i+1]) currentSum += nums[i];
                else {
                    currentSum += nums[i];
                    if (currentSum >= maxSum) maxSum = currentSum;
                    currentSum = 0;
                }
                aux = i;
            }
            currentSum += nums[aux + 1];
            if (currentSum >= maxSum) maxSum = currentSum;
        }
        return maxSum;
    }
};