// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (const int& price: prices) {
            minPrice = std::min(minPrice, price);
            maxProfit = std::max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
