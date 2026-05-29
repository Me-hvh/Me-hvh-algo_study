prices = list(map(int, input().split()))
profit = 0
buy = prices[0]
for sell in prices:
    buy = min(sell, buy)
    profit = max(profit, sell-buy)
print(profit)

'''
leecode写法
    buy = prices[0]
    profit = 0
    for sell in prices:
        buy = min(buy, sell)
        profit = max(profit, sell-buy)
    return profit
'''