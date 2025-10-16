#include <iostream>

int main() {
	int w;
	std::cin >> w;
	bool condition;
	for (int i = 0; i <= w; i++)
		if (i % 2 == 0 && (w - i) % 2 == 0)
			condition = true;
	if (condition)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;

}