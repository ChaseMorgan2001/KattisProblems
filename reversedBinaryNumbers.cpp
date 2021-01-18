#include <iostream>
#include <string>
#include <bitset>
#include <stack>
using namespace std;

string reverseStr(string& str) {
	int n = str.length();
	for (int i = 0; i < n / 2; i++) {
		swap(str[i], str[n - i - 1]);
	}
	return str;
}
int main() {
	int n, nrev;
	string bin, binrev = "";
	int x = 0;
	stack<string> bits;
	cin >> n;
	bin = bitset<32>(n).to_string();
	for (int i = 0; i < bin.length(); i++) {
		if (bin[i] == '1') {
			x = i;
			break;
		}
	}
	bin.erase(0, x);
	//cout << bin << endl;
	binrev = reverseStr(bin);
	//cout << binrev << endl;
	string zeros = "";
	for (int i = 0; i < (32 - binrev.length()); i++) {
		zeros += "0";
	}
	binrev = zeros + binrev;
	//cout << binrev << endl;
	cout << bitset<32>(binrev).to_ulong();
	return 0;
}
