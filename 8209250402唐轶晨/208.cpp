#include<iostream>
int main() {
	double a;
	std::cout << "enter a number:";
	std::cin >> a;
	if (a < 0) std::cout << "invalid number";
	if (a == 0) std::cout << "the root is 0";
	else {
		double x0, x1,y;
		x0 = a;
		x1 = 0.5 * (x0 + a / x0);
		y = ((x0 - x1 >= 0) ? x0 - x1 : x1 - x0);
		while (y >= 1e-5) {
			y = ((x0 - x1 >= 0) ? x0 - x1 : x1 - x0);
			x0 = x1;
			x1 = 0.5 * (x0 + a / x0);
		}
		std::cout << "the root is " << x1 << std::endl;
	}
	return 0;
}