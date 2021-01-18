#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	stack<int> nums;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		nums.push(temp);
	}
	for (int i = 0; i < n; i++) {
		cout << nums.top() << endl;
		nums.pop();
	}
	return 0;
}
