// https://leetcode.com/problems/top-k-frequent-elements/

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;

        for (int& num: nums) {
            freq[num]++;
        }

        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for (const auto& [num, count]: freq) {
            buckets[count].push_back(num);
        }

        std::vector<int> result;

        for (int i = buckets.size() - 1; i >= 0; --i) {
            for (int num: buckets[i]) {
                result.push_back(num);

                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
