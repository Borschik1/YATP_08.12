#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n - 1];
	for (int i = 0; i < n - 1; i++) {
		arr[i] = 0;
	}
	int ip = 0;
	while (ip < n - 1) {
		int mul = 2;
		while ((ip + 2) * mul <= n) {
			arr[(ip + 2) * mul - 2] = 1;
			mul++;
		}
		ip++;
		while (arr[ip] != 0) {
			if (ip > n - 2) {
				break;
			}
			ip++;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == 0) {
			cout << i + 2 << " ";
		}
	}
	return 0;
}
