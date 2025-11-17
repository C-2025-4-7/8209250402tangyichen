#include <iostream>
int main(){
	char a;
	std::cin >> a;
	if (a >= 'a' && a <= 'z') {
		a = a - 32;
		std::cout << a;
	}
	else {
		a = a + 1;
		std::cout << (int)a;
	}
	return 0;
}