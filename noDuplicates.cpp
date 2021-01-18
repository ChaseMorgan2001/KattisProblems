#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> words;
	string word = "";
	string phrase;
	bool dup = false;
	getline(cin, phrase);
	for (int i = 0; i < phrase.length(); i++) {
		if (phrase[i] == ' ') {
			words.push_back(word);
			word = "";
		}
		else {
			word += phrase[i];
			if (i == phrase.length() - 1) {
				words.push_back(word);
			}
		}
	}
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < words.size(); j++) {
			if (words.at(i) == words.at(j) && i != j) {
				dup = true;
			}
		}
	}
	if (dup) {
		cout << "no";
	}
	else {
		cout << "yes";
	}
	return 0;
}
