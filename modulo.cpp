#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> remainders;
	
	for (int i = 0; i < 10; i++) {
		bool unique = true;
		int n;
		cin >> n;
		for (int j = 0; j < remainders.size(); j++) {
			if (n % 42 == remainders.at(j)) {
				unique = false;
			}
		}
		if (unique) {
			remainders.push_back(n % 42);
		}
	}
	cout << remainders.size();
	return 0;
}
