// https://leetcode.com/problems/contains-duplicate/

#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> uset;
        for (auto& it: nums) {
            if (uset.find(it) == uset.end()) {
                uset.insert(it);
            } else {
                return true;
            }
        }
        return false;
    }
};
