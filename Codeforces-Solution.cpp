#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


namespace CodeforcesSolution {

	

	void pizzaTime() {
		int t;
		std::cin >> t;
		for (int i = 0; i < t; i++) {
			int n;
			std::cin >> n;
			int countHao{ 0 };
			while (n) {
				if (n <= 2) {
					n -= n;
				}
				else {
					int m1{ 0 }, m3{ 0 };
					if (n % 3 == 0) {
						m1 = m3 = n / 3;
					} 
					else if (n % 3 == 1) {
						m1 = n / 3;
						m3 = (n / 3) + 1;
					}
					else {
						m1 = n / 3;
						m3 = (n / 3) + 2;
					}
					countHao += m1;
					n = m3;
				}
			}
			std::cout << countHao << '\n';
		}
	}
	void tram() {
		int stops;
		std::cin >> stops;
		int maximumPassengers{ 0 };
		int currentPassengers{ 0 };
		for (int i = 0; i < stops; i++) {
			int exit, enter;
			std::cin >> exit >> enter;
			currentPassengers += (enter - exit);
			if (currentPassengers > maximumPassengers)
				maximumPassengers = currentPassengers;
		}
		std::cout << maximumPassengers;
	}
	void word() {
		std::string word;
		std::cin >> word;
		int caps{ 0 }, lows{ 0 };
		for (int i = 0; i < word.size(); i++) {
			if (word[i] <= 'Z' && word[i] >= 'A')
				caps += 1;
			else
				lows += 1;
		}
		if (caps > lows)
			for (int i = 0; i < word.size(); i++) {
				if (!(word[i] <= 'Z' && word[i] >= 'A'))
					word[i] -= 32;				
			}
		else
			for (int i = 0; i < word.size(); i++) {
				if ((word[i] <= 'Z' && word[i] >= 'A'))
					word[i] += 32;
			}
		std::cout << word;
	
	}
	void wordCapitalization() {
		std::string word;
		std::cin >> word;

		if (word[0] <= 'Z' && word[0] >= 'A')
			std::cout << word;
		else {
			word[0] -= 32;
			std::cout << word;
		}
	
	}

	void helpfulMaths() {
		std::string question;
		std::cin >> question;

		std::vector<int> numbers;
		std::string answer = "";

		for (int i = 0; i < question.size(); i++) 
			if (question[i] == '1')
				numbers.push_back(1);
		
		for (int i = 0; i < question.size(); i++)
			if (question[i] == '2')
				numbers.push_back(2);

		for (int i = 0; i < question.size(); i++)
			if (question[i] == '3')
				numbers.push_back(3);

		for (int i = 0; i < numbers.size(); i++) {
			if (i != numbers.size() - 1) {
				answer += '0' + numbers[i];
				answer += '+';
			}
			else
				answer += '0' + numbers[i];
		}
		std::cout << answer;
	}
	void boyOrGirl() {
		std::string name;
		std::cin >> name;
		int alphabets[26];
		int count = 0;
		for (int i = 0; i < 26; i++)
			alphabets[i] = 0;
		for (int j = 0; j < name.size(); j++)
			alphabets[name[j] - 'a'] += 1;
		for (int k = 0; k < 26; k++)
			if (alphabets[k] > 0)
				count += 1;
		if ((count % 2) == 0)
			std::cout << "CHAT WITH HER!";
		else
			std::cout << "IGNORE HIM!";
	}

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

	void wrongSubtraction() {
		size_t n, k;
		std::cin >> n >> k;
		while (k != 0) {
			if (n % 10 == 0) {
				n /= 10;
				k -= 1;
			}
			else {
				n -= 1;
				k -= 1;
			}
		}
		std::cout << n;
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
	CodeforcesSolution::tram();
	return 0;
}