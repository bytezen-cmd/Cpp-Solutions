#include <vector>



namespace HackerRankSolution {

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