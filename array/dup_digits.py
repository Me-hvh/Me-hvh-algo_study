nums = list(map(int, input().split()))
nums1 = set(nums) #转换为集合(无相同元素)
if (len(nums) != len(nums1)): #原数组与集合长度不一致说明有重复
    print("true")
else:
    print("false")

'''
leecode写法
    n = set(nums)
    if len(nums) != len(n):
        return bool(1)
    else:
        return bool(0)
'''