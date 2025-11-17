#include<iostream>
int main() {
	char c;
	int letters = 0, numbers = 0, spaces = 0, others = 0;
	std::cout << "enter the string(end with enter)" << std::endl;
	while (std::cin.get(c) && c != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letters += 1;
		else if (c >= '0' && c <= '9') numbers += 1;
		else  if (c == ' ') spaces += 1;
		else others += 1;
	}
	std::cout << "the number of letters is " << letters << std::endl;
	std::cout << "the number of numbers is " << numbers << std::endl;
	std::cout << "the number of spaces is " << spaces << std::endl;
	std::cout << "the number of others is " << others << std::endl;
	return 0;
}