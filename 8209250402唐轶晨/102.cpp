#include<iostream>
int main() {
	const float pi = 3.14;
	float r, h,V;
	std::cin >> r >> h;
	V = (pi * r * r * h) / 3;
	std::cout << V << std::endl;
	return 0;
}