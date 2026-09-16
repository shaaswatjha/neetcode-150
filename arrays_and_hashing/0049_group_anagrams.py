# https://leetcode.com/problems/group-anagrams/

from collections import defaultdict


class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        grouped_anagrams = defaultdict(list)

        for s in strs:
            key = "".join(c for c in sorted(s))
            grouped_anagrams[key].append(s)

        return list(grouped_anagrams.values())
