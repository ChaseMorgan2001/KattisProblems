#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<string> unis, teams;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool placed = true;
		string uni, team;
		cin >> uni >> team;
		for (int j = 0; j < unis.size(); j++) {
			if (uni == unis.at(j) && i != j) {
				placed = false;
			}
		}
		if (placed) {
			unis.push_back(uni);
			teams.push_back(team);
		}
	}
	//cout << teams.size();
	for (int i = 0; i < 12; i++) {
		cout << unis.at(i) << " " << teams.at(i) << endl;
	}
	return 0;
}
