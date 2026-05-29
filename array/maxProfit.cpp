#include <iostream>
#include <vector>
int maxProfit(std::vector<int> prices)
{
    int res = 0;
    int in = prices[0];
    for (int i = 1; i < prices.size(); ++i)
    {
        int out = prices[i];
        in = std::min(in, out);
        res = std::max(res, out-in);
    }
    return res;
}

int main()
{
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout << maxProfit(prices);
}