#include "libs.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int aux_target;
        vector<int> answer;
        unordered_map<int,int> nums_hash; // Value | Index

        for (int i = 0; i <= nums.size() - 1; i++) {
            nums_hash[nums[i]] = i;
        }

        for (int i = 0; i <= nums.size() - 1; i++) {
            aux_target = target - nums[i];

            if (nums_hash.count(aux_target) && nums_hash[aux_target] != i) {
                answer.push_back(i);
                answer.push_back(nums_hash[aux_target]);
                return answer;
            }
        }

        return answer;
    }
};