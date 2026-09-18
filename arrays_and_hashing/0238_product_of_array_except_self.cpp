// https://leetcode.com/problems/product-of-array-except-self/

#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> result(nums.size(), 1);

        int prefixResult = 1;

        for (int i = 0; i < nums.size() - 1; ++i) {
            prefixResult *= nums[i];
            result[i + 1] = prefixResult;
        }

        int postfixResult = 1;

        for (int j = nums.size() - 1; j > 0; --j) {
            postfixResult *= nums[j];
            result[j - 1] *= postfixResult;
        }

        return result;
    }
};
