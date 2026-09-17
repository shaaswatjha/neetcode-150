// https://leetcode.com/problems/encode-and-decode-strings/
// https://neetcode.io/problems/string-encode-and-decode/question

#include <iostream>
#include <string>
#include <vector>

class Solution {
public:

    std::string encode(std::vector<std::string>& strs) {
        std::string result = "";

        for (const auto& it: strs) {
            int length = it.size();
            result += std::to_string(length);
            result += '#';
            result += it;
        }

        return result;
    }

    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> result;

        int i = 0;

        while (i < s.size()) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int word_length = 0;

            for (int k = i; k < j; ++k) {
                word_length = word_length * 10 + (s[k] - '0');
            }

            result.push_back(s.substr(j + 1, word_length));

            i = j + 1 + word_length;
        }

        return result;
    }
};
