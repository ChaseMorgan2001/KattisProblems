#include <iostream>
#include <string>
using namespace std;

int sumDig(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int l, d, x;
	int n, m;
	cin >> l >> d >> x;

	for (int i = l; i <= d; i++) {
		int sum = sumDig(i);
		if (sum == x) {
			n = i;
			break;
		}
	}
	for (int i = d; i >= l; i--) {
		int sum = sumDig(i);
		if (sum == x) {
			m = i;
			break;
		}
	}
	cout << n << endl << m;
	return 0;
}
