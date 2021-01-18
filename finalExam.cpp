#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, score = 0;
	vector<char> correct;
	vector<char> hanh;

	cin >> n;
	for (int i = 0; i < n; i++) {
		char temp;
		cin >> temp;
		correct.push_back(temp);
	}
	for (int i = 1; i < n; i++) {
		hanh.push_back(correct.at(i));
	}
	hanh.push_back('X');
	for (int i = 0; i < n; i++) {
		if (hanh.at(i) == correct.at(i)) {
			score++;
		}
	}
	cout << score;
	return 0;
}
