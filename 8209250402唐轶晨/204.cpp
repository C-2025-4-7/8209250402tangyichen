#include <iostream>
int main() {
	float num1, num2,result;
	char operation;
	std::cout << "input calculation formula:";
	std::cin >> num1 >> operation >> num2;
	switch (operation) {
	case  '+':
		result = num1 + num2;
		std::cout << "result is " << result << std::endl;
		break;
	case '-':
		result = num1 - num2;
		std::cout << "result is " << result << std::endl;
		break;
	case '*':
		result = num1 * num2;
		std::cout << "result is " << result << std::endl;
		break;
	case '/':
		if (num2 == 0) std::cout << "invalid numbers" << std::endl;
		else {
			result = num1 / num2;
			std::cout << "result is " << result << std::endl;
		}
		break;
	case '%':
		if (num2 == 0) std::cout << "invalid numbers" << std::endl;
		else {
			result = (int)num1 % (int)num2;
			std::cout << "result is " << result << std::endl;
		}
		break;
	default:std::cout << "invalid formula" << std::endl;
	}
	return 0;
}