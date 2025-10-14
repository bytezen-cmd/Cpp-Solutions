#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <cstdlib>

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

    std::string interpret(std::string command) {
        std::string returner = "";
        for (int x = 0; x < command.length(); x++) {
            if (command[x] == 'G')
                returner += "G";
            if (command.substr(x, 2) == "()")
                returner += "o";
            if (command.substr(x, 4) == "(al)")
                returner += "al";
        }
        return returner;
    }

    int countGoodTriplets(std::vector<int>& arr, int a, int b, int c) {
        int count{ 0 };

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (std::abs(arr[i] - arr[j]) <= a && std::abs(arr[j] - arr[k]) <= b && std::abs(arr[i] - arr[k]) <= c) {
                        count += 1;
                    }

                }
            }
        }

        return count;
    }

};

int main() 
{

}