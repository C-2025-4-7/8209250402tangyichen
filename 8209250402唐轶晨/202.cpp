#include <iostream>
int main() {
    float x;
    std::cin >> x;
    if (x > 0 && x < 1) {
        float y = 3 - 2 * x;
        std::cout << y;
    }
    else if (x >= 1 && x < 5) {
        float y = 1 / (2 * x) + 1;
        std::cout << y;
    }
    else if (x >= 5 && x < 10) {
        float y = x * x;
        std::cout << y;
    }
    else std::cout << "invalid number";
    return 0;
}