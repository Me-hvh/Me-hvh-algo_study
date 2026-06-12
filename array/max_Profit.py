prices = list(map(int, input().split()))
profit = 0 #初始化利润
buy = prices[0] #初始化买入价钱
for sell in prices:
    buy = min(sell, buy) #买入要最小
    profit = max(profit, sell-buy) #只记录最大利润
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