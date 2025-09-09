#include <iostream>
#include <Windows.h>
using namespace std;

template <typename T>
void bubble_sort(T a[], short n) {                //O(n * log n) < O(n²)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				T temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

template <typename T>
void print_array(T a[], short n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
}

int main() {
	const short size = 5;
	int a[size] = { 5, 2, 7, 1, 9 };
	bubble_sort(a, size);
	print_array(a, size);
	return 0;
}


