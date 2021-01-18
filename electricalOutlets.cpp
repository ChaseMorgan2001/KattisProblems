#include <iostream>
using namespace std;

int main() {
	int n, outlets;
	cin >> n;
	for (int i = 0; i < n; i++) {
		outlets = 0;
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int o;
			cin >> o;
			outlets += o;
		}
		outlets -= (k - 1);
		cout << outlets << endl;
	}
	return 0;
}
