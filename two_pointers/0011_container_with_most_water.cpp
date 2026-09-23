// https://leetcode.com/problems/container-with-most-water/

#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int result = 0;

        int left = 0;
        int right = static_cast<int>(height.size()) - 1;

        while (left < right) {
            int area = (right - left) * std::min(height[left], height[right]);
            result = std::max(result, area);

            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }

        return result;
    }
};
