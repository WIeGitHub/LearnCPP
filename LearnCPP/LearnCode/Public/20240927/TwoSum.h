#pragma once

#include <vector>
#include <iostream>

class SolutionTwoSum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        if (nums.size() < 2) {
            return {};
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
