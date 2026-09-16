// https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (umap.find(complement) != umap.end()) {
                return {umap[complement], i};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};
