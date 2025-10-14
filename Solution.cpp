#include <iostream>
#include <vector>
#include <numeric>

class Solution {
private:
public:
    int findMiddleIndex(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int sumLeft = std::accumulate(nums.begin(), nums.begin() + i, 0);
            int sumRight = std::accumulate(nums.begin() + i + 1, nums.begin() + nums.size(), 0);
            if (sumLeft == sumRight)
                return i;
        }
        return -1;
    }

};