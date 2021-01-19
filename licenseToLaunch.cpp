#include <iostream>
using namespace std;

int main() {
	int n, day, min = 9999999;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x < min) {
			day = i;
			min = x;
		}
	}
	cout << day;
	return 0;
}
