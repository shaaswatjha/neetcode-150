// https://leetcode.com/problems/trapping-rain-water/

#include <vector>

class Solution {
public:
    int trap(std::vector<int>& height) {
        int left = 0;
        int right = static_cast<int>(height.size()) - 1;

        int maxLeft = height[left];
        int maxRight = height[right];

        int result = 0;

        while (left < right) {
            if (maxLeft <= maxRight) {
                left++;
                maxLeft = std::max(maxLeft, height[left]);
                result += maxLeft - height[left];
            } else {
                right--;
                maxRight = std::max(maxRight, height[right]);
                result += maxRight - height[right];
            }
        }

        return result;
    }
};
