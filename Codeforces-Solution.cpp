#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace CodeforcesSolution {
	void watermelon() {
		int w;
		std::cin >> w;
		bool condition = false;
		for (int i = 1; i < w; i++)
			if (i % 2 == 0 && (w - i) % 2 == 0)
				condition = true;
		if (condition)
			std::cout << "YES";
		else
			std::cout << "NO";
	}

	void wayTooLongWords() {
		int numberOfLines;
		std::string Words;
		std::cin >> numberOfLines;
		for (int i = 0; i < numberOfLines; i++) {
			std::cin >> Words;
			if (Words.length() > 10)
				std::cout << Words[0] << Words.length() - 2 << Words[Words.length() - 1] << '\n';
			else
				std::cout << Words << '\n';
		}
	}

	void team() {
		int numberofProblems;
		std::cin >> numberofProblems;

		int attempted{ 0 };

		for (int i = 0; i < numberofProblems; i++) {
			int agree1, agree2, agree3;
			std::cin >> agree1;
			std::cin >> agree2;
			std::cin >> agree3;
			if (agree1 + agree2 + agree3 >= 2)
				attempted += 1;
		}

		std::cout << attempted;
	}

	void bitPlusPlus() {
		int noOfOperations;
		std::cin >> noOfOperations;
		int x{ 0 };
		std::string operation;
		for (int i = 0; i < noOfOperations; i++) {
			std::cin >>	operation;
			if (operation == "++X")
				++x;
			else if (operation == "X++")
				++x;
			else if (operation == "--X")
				--x;
			else if (operation == "X--")
				--x;
		}
		std::cout << x;
	}

	void nextRound() {
		int n, k;
		std::cin >> n;
		std::cin >> k;
		std::vector<int> scores;
		int currentScore;
		for (int i = 0; i < n; i++) {
			std::cin >> currentScore;
			scores.push_back(currentScore);
		}
		std::sort(scores.begin(), scores.end(), std::greater<int>());
		auto it = std::max_element(scores.begin(), scores.end());
		
		if (*it <= 0)
			std::cout << 0;
		else {
			int compareValue{ scores[k - 1] };
			if (compareValue <= 0) {
				int count{ 0 };
				for (int i = 0; i < n; i++) {
					if (scores[i] > compareValue)
						count += 1;
				}
				std::cout << count;
			}
			else {
				int count{ 0 };
				for (int i = 0; i < n; i++) {
					if (scores[i] >= compareValue)
						count += 1;
				}
				std::cout << count;
			}

		}

	}
};
int main() {
	CodeforcesSolution::nextRound();
	return 0;

}