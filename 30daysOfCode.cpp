#include <iostream>
namespace answers {
    void day1() {
        int c;
        std::cout << "Hello, World." << '\n';
        while ((c = getchar()) != EOF)
            putchar(c);
    }
}

int main() {
    answers::day1();
    return 0;
}