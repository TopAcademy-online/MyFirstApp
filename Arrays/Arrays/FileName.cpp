#include <iostream>
using namespace std;

int main() {
	int months[6];
	int sum = 0;
	for (size_t i = 0; i < 6; i++) {
		cout << "Enter money: ";
		cin >> months[i];
		sum += months[i];
	}
	cout << sum;
}