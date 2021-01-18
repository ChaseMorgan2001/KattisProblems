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
	int n;
	cin >> n;
	while (n % sumDig(n) != 0) {
		n++;
	}
	cout << n;
	return 0;
}
