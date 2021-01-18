#include <iostream>
#include <string>
using namespace std;

int main() {
	string hey;
	int e = 0;

	cin >> hey;

	for (int i = 0; i < hey.length(); i++) {
		if (hey[i] == 'e') {
			e++;
		}
	}
	e *= 2;
	cout << "h";
	for (int i = 0; i < e; i++) {
		cout << "e";
	}
	cout << "y" << endl;
	return 0;
}
