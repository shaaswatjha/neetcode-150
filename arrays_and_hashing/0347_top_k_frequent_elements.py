# https://leetcode.com/problems/top-k-frequent-elements/

from collections import Counter


class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        counter = Counter(nums).most_common(k)
        result = [num for num, _ in counter]
        return result
