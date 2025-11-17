#include <iostream>
int main() {
	int a, b,max,min,c,d;
	std::cout << "enter two numbers:";
	std::cin >> a >> b;
	max = a > b ? a:b;
	min = a < b ? a : b;
	for (int i = 1; i <= min; i++) 
		if (a % i == 0 && b % i == 0) c = i;
	for (int i = max; i <= a * b; i++)
		if (i % min == 0 && i % max == 0) {
			d = i;
			break;
		}
	std::cout << "the GCD is " << c << std::endl << "the LCM is " << d << std::endl;
	return 0;
}