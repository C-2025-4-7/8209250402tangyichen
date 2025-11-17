#include<iostream>
int main() {
	int day = 0, total , sum = 0;
	float price = 0.8,average;
	for (total=2; total <= 100; total *= 2) {
		day += 1;
		sum += total;
	}
	average = (sum * price) / day;
	std::cout << average<<std::endl;
	return 0;
}