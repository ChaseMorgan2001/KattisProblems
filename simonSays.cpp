#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string command;
	string action = "";

	for (int i = 0; i < n + 1; i++) {
		getline(cin, command);
		action = "";
		if (command.find("Simon says ") != string::npos) {
			for (int j = 11; j < command.length(); j++) {
				action += command[j];
			}
			cout << action << endl;
		}
	}
	return 0;
}
