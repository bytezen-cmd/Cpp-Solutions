#include <iostream>               
#include <vector>                // for std::vector and .begin()/.end()
#include <numeric>              // for std::accumulate
#include <string>              // for std::string and .length()
#include <cstdlib>            // for std::abs
#include <algorithm>         // for std::sort and std::reverse
#include <sstream>          // for std::stringstream
#include <limits>          // for std::numeric_limits<double>
#include <cmath>          // for std::pow 
#include <bitset>
#include <cctype>
#include <unordered_set>


class LeetcodeSolution {
private:
    std::vector<int> happySequence;
public:



    bool threeConsecutiveOdds(std::vector<int>& arr) {
        if (arr.size() < 3)
            return false;
        for (int index{ 0 }; index < arr.size() - 2; index++)
            if ((arr[index] % 2 == arr[index + 1] % 2) &&
                (arr[index + 1] % 2 == arr[index + 2] % 2) &&
                (arr[index] % 2 == 1))
                return true;
        return false;
    }

    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> answer;
        for (int i = 1; i < (n + 1); i++) {
            if ((i % 15) == 0)
                answer.push_back("FizzBuzz");
            else if ((i % 5) == 0)
                answer.push_back("Buzz");
            else if ((i % 3) == 0)
                answer.push_back("Fizz");
            else {
                std::stringstream temp;
                temp << i;
                std::string temp2 = temp.str();
                answer.push_back(temp2);
            }
        }
        return answer;

    }

    size_t firstUniqChar(std::string s) {
        int freq[26];
        for (int i = 0; i < 26; i++)
            freq[i] = 0;
        for (char c : s)
            freq[c - 'a'] += 1;
        for (char c : s)
            if (freq[c - 'a'] == 1)
                return (size_t)s.find(c);
        return -1;
    }

    bool isPowerOfTwo(int n) {
        if (n < 1) {
            return false;
        }
        while (n != 1) {
            if ((n % 2) != 0)
                return false;
            else
                n /= 2;
        }
        return true;
    }

    bool isAnagram(std::string s, std::string t) {
        int sCount[26], tCount[26];

        for (int i = 0; i < 26; i++) {
            sCount[i] = 0;
            tCount[i] = 0;
        }

        for (int j = 0; j < s.size(); j++)
            sCount[s[j] - 'a'] += 1;

        for (int k = 0; k < t.size(); k++)
            tCount[t[k] - 'a'] += 1;

        for (int l = 0; l < 26; l++)
            if (sCount[l] != tCount[l])
                return false;
        return true;
    }

    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> number(nums.begin(), nums.end());
        return (nums.size() != number.size());
    }

    bool isPowerOfThree(int n) {
        if (n < 1)
            return false;
        while (n != 1) {
            if ((n % 3) != 0)
                return false;
            else
                n /= 3;
        }
        return true;
    }

    bool isHappy(int n) {
        while ((n != 1) && !(std::find(happySequence.begin(), happySequence.end(), n) != happySequence.end())) {
            happySequence.push_back(n);
            std::string temp = std::to_string(n);
            size_t sum{ 0 };
            for (int i = 0; i < temp.length(); i++)
                sum += (size_t)std::pow((size_t)temp[i] - '0', 2);
            n = (int)sum;
        }
        if (n == 1)
            return true;
        else
            return false;
    }

    int hammingWeight(int n) {
        std::string binaryString = std::bitset<32>(n).to_string();
        int count{ 0 };
        for (int i = 0; i < binaryString.size(); i++)
            if (binaryString[i] == '1')
                count += 1;
        return count;

    }

    bool isPowerOfFour(int n) {
        if (n < 1)
            return false;
        while (n != 1) {
            if ((n % 4) == 0)
                n /= 4;
            else
                return false;
        }
        return true;
    }

    void reverseString(std::vector<char>& s) {
        for (int i = 0; i < s.size() / 2; i++) {
            char temp = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = temp;
        }
    }

    bool isBoomerang(std::vector<std::vector<int>>& points) {
        double area;
        int x1, x2, x3, y1, y2, y3;
        x1 = points[0][0]; x2 = points[1][0]; x3 = points[2][0];
        y1 = points[0][1]; y2 = points[1][1]; y3 = points[2][1];
        area = 0.5 * std::abs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))));

        return area != 0;
    }

    int getMaximumGenerated(int n) {
        std::vector<int> genArr;
        for (int i = 0; i < n + 1; i++) {
            if (i < 2)
                genArr.push_back(i);
            else if (i % 2 == 0)
                genArr.push_back(genArr[i / 2]);
            else if (i % 2 != 0)
                genArr.push_back(genArr[i / 2] + genArr[i / 2 + 1]);

        }
        int comp{ 0 };
        for (int i = 0; i < genArr.size(); i++)
            if (comp < genArr[i])
                comp = genArr[i];
        return comp;
    }

    int minStartValue(std::vector<int>& nums) {
        int some{ 1 };

        label:
            int curr{ some };
            for (int i = 0; i < nums.size(); i++) {
                curr += nums[i];
                if (curr < 1) {
                    some += 1;
                    goto label;
                }
            }
        return some;
    }

    std::vector<std::string> stringMatching(std::vector<std::string>& words) {
        std::vector<std::string> r;
        for (int i = 0; i < words.size(); i++)
            for (int j = 0; j < words.size(); j++)
                if ((j != i) && (words[i].find(words[j]) != std::string::npos) && (!(find(r.begin(), r.end(), words[j]) != r.end())))
                    r.push_back(words[j]);
        return r;
    }

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
        size_t x = std::max(word1.length(), word2.length());
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
        size_t length = s.length();
        std::string joined_s = "";
        for (int i = 0; i < words.size(); i++) {
            joined_s += words[i];
            if (joined_s == s)
                return true;
        }
        return false;
    }

    int smallestEvenMultiple(int n) {
        if (n % 2 == 0)
            return n;
        else
            return (n * 2);
    }

    std::vector<int> separateDigits(std::vector<int>& nums) {
        std::vector<int> output;
        for (int i = 0; i < nums.size(); i++) {
            std::string temp = std::to_string(nums[i]);
            for (char c : temp)
                output.push_back((int)c - '0');
        }
        return output;
    }

    int isPrefixOfWord(std::string sentence, std::string searchWord) {
        size_t length = searchWord.length();
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

    int hammingDistance(int x, int y) {
        int b1[33], b2[33];
        int index1{ 0 }, index2{ 0 };
        while (x) {
            b1[index1] = x % 2;
            x /= 2;
            index1++;
        }
        while (y) {
            b2[index2] = y % 2;
            y /= 2;
            index2++;
        }
        int output{ 0 };
        for (int i = 0; i < 33; i++) {
            output += (b1[i] ^ b2[i]);
        }
        return output;
    }

};
