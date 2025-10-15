#include <iostream>               
#include <vector>                // for std::vector and .begin()/.end()
#include <numeric>              // for std::accumulate
#include <string>              // for std::string and .length()
#include <cstdlib>            // for std::abs
#include <algorithm>         // for std::sort and std::reverse
#include <sstream>          // for std::stringstream
#include <limits>          // for std::numeric_limits<double>
#include <cmath>          // for std::pow 

class Solution {
private:
public:

    std::string firstPalindrome(std::vector<std::string>& words) {
        for (int i = 0; i < words.size(); i++) {
            std::string x = words[i];
            std::reverse(x.begin(), x.end());
            if (x == words[i])
                return words[i];
        }
        return "";
    }

    bool isPerfectSquare(int num) {
        for (long int i = 0; i < (num / 2) + 2; i++)
            if (i * i == (long int)num)
                return true;
        return false;
    }

    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string word = "";
        int x = std::max(word1.length(), word2.length());
        for (int i = 0; i < x; i++) {
            if (i < word1.length() && i < word2.length()) {
                word += word1[i];
                word += word2[i];
            }
            else if (i < word1.length() && i >= word2.length())
                word += word1[i];
            else if (i >= word1.length() && i < word2.length())
                word += word2[i];
        }
        return word;
    }

    bool isPrefixString(std::string s, std::vector<std::string>& words) {
        int length = s.length();
        std::string joined_s = "";
        for (int i = 0; i < words.size(); i++) {
            joined_s += words[i];
            if (joined_s == s)
                return true;
        }
        return false;
    }

    int isPrefixOfWord(std::string sentence, std::string searchWord) {
        int length = searchWord.length();
        std::stringstream sentence_t(sentence);
        std::string word;
        int count{ 0 };
        while (sentence_t >> word) {
            count += 1;
            if (word.substr(0, length) == searchWord)
                return count;
        }
        return -1;
    }

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

    bool canMakeArithmeticProgression(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        int x;
        x = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (!((arr[i] - arr[i - 1]) == x))
                return false;
        }
        return true;
    }

    int arraySign(std::vector<int>& nums) {
        int x{ 1 };
        for (int i = 0; i < nums.size(); i++)
            x *= nums[i];
        if (x > 0)
            return 1;
        else if (x < 0)
            return -1;
        else
            return 0;

    }

};

int main() 
{

}