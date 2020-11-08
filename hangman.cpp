#include <iostream>
#include <string>
using namespace std;

int countUnique(string word) {
    int numUnique = 0;
    for (int i = 0; i < word.length(); i++) {
        bool appears = false;
        for (int j = 0; j < i; j++) {
            if (word[j] == word[i]) {
                appears = true;
                break;
            }
        }

        if (!appears) {
            numUnique++;
        }
    }
    return numUnique;
}

int countErrors(string word, string alphabet) {
    int errors = 0, correctLetters = 0;
    for (int i = 0; i < 26; i++) {
        if (word.find(alphabet[i]) != string::npos) {
            correctLetters++;
        }
        else {
            errors++;
        }
        if (correctLetters == countUnique(word)) {
            break;
        }
    }
    return errors;
}

int main() {
    string word, alphabet;

    cin >> word;
    cin >> alphabet;    
    
    if (countErrors(word, alphabet) >= 10) {
        cout << "LOSE";
    }
    else {
        cout << "WIN";
    }
    return 0;
}
