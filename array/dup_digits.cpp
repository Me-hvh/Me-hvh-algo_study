#include <iostream>
#include <vector>
#include <unordered_map>
bool dup_digits(std::vector<int>& nums)
{
    std::unordered_map<int, int> geshu;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (++geshu[nums[i]] == 2) return true;
    }
    return false;
}


int main()
{
    std::vector<int> nums = {1, 2, 3, 1};
    std::cout << dup_digits(nums);
}