#include <vector>
#include <iostream>
#include <algorithm>


namespace HackerRankSolution {

    std::vector<int> maximumPerimeterTriangle(std::vector<int> sticks) {
        std::sort(sticks.begin(), sticks.end(), std::greater<int>());
        std::vector<int> output;
        for (int i{ 0 }; i < sticks.size() - 2; i++) {
            int j{ i + 1 }, k{ i + 2 };
            if (((sticks[i] + sticks[j]) > sticks[k]) && ((sticks[k] + sticks[i]) > sticks[j]) && ((sticks[j] + sticks[k]) > sticks[i])) {
                output.push_back(sticks[k]); output.push_back(sticks[j]); output.push_back(sticks[i]);
                return output;
            }
        }
        output.push_back(-1);
        return output;

    }

    int luckBalance(int k, std::vector<std::vector<int>> contests) {
        std::vector<int> surplus;
        int output{ 0 };
        for (int i{ 0 }; i < contests.size(); i++) {
            if (contests[i][1] == 1) {
                surplus.push_back(contests[i][0]);
            }
            else {
                output += contests[i][0];
            }
        }
        std::sort(surplus.begin(), surplus.end(), std::greater<int>());
        for (int i{ 0 }; i < surplus.size(); i++) {
            if (i >= k) {
                output -= surplus[i];
            }
            else {
                output += surplus[i];
            }
        }
        return output;
    }

    int birthdayCakeCandles(std::vector<int> candles) {
        int maximum{ 0 }, count{ 0 };
        for (int n : candles)
            if (maximum < n)
                maximum = n;
        for (int n : candles) {
            if (n == maximum)
                count++;
        }
        return count;
    }

    void miniMaxSum(std::vector<int> arr) {
        std::sort(arr.begin(), arr.end());
        long minimum{ 0 }, maximum{ 0 };
        for (int i{ 0 }; i < 4; i++)
            minimum += arr[i];
        for (int i{ 1 }; i < 5; i++)
            maximum += arr[i];
        std::cout << minimum << ' ' << maximum;
    }

    void staircase(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < (n - i); j++) {
                std::cout << " ";
            }
            for (int k = 0; k < i; k++) {
                std::cout << "#";
            }
            std::cout << '\n';
        }
    }

    void plusMinus(std::vector<int> arr) {
        int countZero{ 0 }, countNegative{ 0 }, countPositive{ 0 };
        for (int n : arr) {
            if (n > 0)
                countPositive += 1;
            else if (n < 0)
                countNegative += 1;
            else
                countZero += 1;
        }
        int total = countZero + countNegative + countPositive;
        std::cout << (float)countPositive / total << '\n' << (float)countNegative / total << '\n' << (float)countZero / total;
    }

    int diagonalDifference(std::vector<std::vector<int>> arr) {
        int d1{ 0 }, d2{ 0 };
        for (int i{ 0 }; i < arr.size(); i++)
            d1 += arr[i][i];
        for (int i{ 0 }; i < arr.size(); i++)
            d2 += arr[i][arr[i].size() - i - 1];
        return abs(d1 - d2);
    }

    long aVeryBigSum(std::vector<long> ar) {
        long output{ 0 };
        for (int n : ar)
            output += n;
        return output;
    }

    std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
        int a_score{ 0 }, b_score{ 0 };
        for (int i{ 0 }; i < 3; i++) {
            if (a[i] > b[i])
                a_score += 1;
            else if (b[i] > a[i])
                b_score += 1;
        }
        std::vector<int> output;
        output.push_back(a_score);
        output.push_back(b_score);
        return output;
    }

    int simpleArraySum(std::vector<int> ar) {
        int output{ 0 };
        for (int n : ar)
            output += n;
        return output;
    }

    int solveMeFirst(int a, int b) {
        return a + b;
    }

};