nums = list(map(int, input().split()))
nums1 = set(nums)
if (len(nums) != len(nums1)):
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