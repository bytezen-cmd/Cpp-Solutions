#include <iostream>
class CodeforcesSolution {
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
};
int main() {
	
	return 0;

}