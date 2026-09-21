// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (right > left) {
            if (numbers[right] + numbers[left] < target) {
                left++;
            } else if (numbers[right] + numbers[left] > target) {
                right--;
            } else {
                return {left + 1, right + 1};
            }
        }

        return {};
    }
};
