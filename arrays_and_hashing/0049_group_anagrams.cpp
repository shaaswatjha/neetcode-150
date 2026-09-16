// https://leetcode.com/problems/group-anagrams/

#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> umap;

        for (auto& it: strs) {
            std::string identifier = it;
            std::sort(identifier.begin(), identifier.end());

            umap[identifier].push_back(it);
        }

        std::vector<std::vector<std::string>> result;

        for (auto& pair: umap) {
            result.push_back(pair.second);
        }

        return result;
    }
};
