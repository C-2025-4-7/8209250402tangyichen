#include <iostream>
int main() {
	float a, b, c;
	std::cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) std::cout << "invalid numbers";
	else {
		float C = a + b + c;
		std::cout << "The perimeter of the triangle is " << C << std::endl;
		if (a == b || a == c || b == c) std::cout << "it's a isosceles triangle" << std::endl;
		else std::cout << "it's not a isosceles triangle" << std::endl;
	}
	return 0;
}