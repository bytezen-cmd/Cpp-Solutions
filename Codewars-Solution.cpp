#include <string>
#include <cctype>
#include <iostream>
#include <cmath>
#include <sstream>
#include <unordered_map>
#include <vector>

namespace CodewarsSolution {

    bool is_pangram(const std::string& s) {
        int charCount[26] = { 0 };

        for (char c : s) {
            if (std::isalpha(c)) {
                c = std::tolower(c);
                charCount[c - 'a'] += 1;
            }
        }

        for (int j = 0; j < 26; j++)
            if (charCount[j] < 1)
                return false;

        return true;
    }

    std::string rot13(std::string msg)
    {
        for (int i = 0; i < msg.length(); i++) {
            int c = (int)msg[i];
            if (std::isupper(msg[i]))
                msg[i] = 'A' + ((c - 65 + 13) % 26);
            else if (std::islower(msg[i]))
                msg[i] = 'a' + ((c - 97 + 13) % 26);
        }
        return msg;
    }

    bool narcissistic(int value) {
        std::stringstream temp;
        temp << value;
        std::string s = temp.str();
        int length = s.length();
        size_t sum = 0;
        for (int i = 0; i < length; i++) {
            sum += std::pow(((size_t)s[i] - '0'), length);
        }
        return (sum == value);
    }

    std::size_t duplicateCount(const std::string& in)
    {
        std::unordered_map<char, int> characterCount;
        for (char c : in) {
            c = std::tolower(c);
            if (characterCount.find(c) != characterCount.end())
                characterCount[c] += 1;
            else
                characterCount[c] = 1;
        }
        int count{ 0 };
        for (auto& pair : characterCount)
            if (characterCount[pair.first] > 1)
                count += 1;
        return count;
    }

    class LongestConsec
    {
    public:
        static std::string longestConsec(const std::vector<std::string>& strarr, int k)
        {
            if (k <= 0 || k > strarr.size()) return "";

            std::string current = "";
            size_t currLength{ 0UL };
            for (size_t i = 0; i < strarr.size() - k + 1; i++) {
                std::string temp;
                for (size_t j = i; j < k + i; j++)
                    temp += strarr[j];
                if (temp.length() > currLength) {
                    current = temp;
                    currLength = temp.length();
                }
            }
            return current;

        }

    };

    std::vector<std::string> wave(std::string y) {
        std::vector<std::string> waveSequence;
        for (int i = 0; i < y.size(); i++) {
            std::string temp = y;
            if (temp[i] != ' ') {
                temp[i] = temp[i] - 32;
                waveSequence.push_back(temp);
            }
        }
        return waveSequence;
    }

};

