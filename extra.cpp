#include <iostream>
#include <vector>
#include <string>

void strangeMachine() {
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n, q;
		std::cin >> n >> q;
		std::string s;
		std::cin >> s;
		std::vector<int> qai;
		for (int x = 0; x < q; x++) {
			int value;
			std::cin >> value;
			qai.push_back(value);
		}
		for (int i = 0; i < qai.size(); i++) {
			int time{ 0 };
			int index{ 0 };
			while (qai[i]) {
				char c = s[index];
				if (c == 'A') {
					qai[i] -= 1;
					time++;
				}
				else {
					qai[i] = (int)(qai[i] / 2);
					time++;
				}
				index++;
				index = (index % s.size());
			}
			std::cout << time << '\n';
		}

	}
}