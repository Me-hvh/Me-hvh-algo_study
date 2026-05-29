#include <iostream>
#include <vector>
#include <unordered_map>
std::vector<int> twoSum(std::vector<int> nums, int target)
{
    std::unordered_map<int, int> index;
    for (int i = 0; i < nums.size(); ++i) index[nums[i]] = i;
    for (int j = 0; j < nums.size(); ++j){
        int temp = target - nums[j];
        if (index.find(temp) != index.end() && j != index[temp]){
            return {j, index[temp]};
        };
    };
    return {0, 0};
}

int main()
{
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::vector<int> res = twoSum(nums, target);
    // 输出
    std::cout << "[";
    for (int i = 0; i < res.size()-1; ++i){
        std::cout << res[i] << ", ";
    }
    std::cout << res[res.size()-1] << "]";
}