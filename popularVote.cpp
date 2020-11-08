#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int numCand;
        int winner = -1, numVotes, totalVotes = 0;
        vector<int>candVotes;
        cin >> numCand;
        for (int j = 0; j < numCand; j++) {
            cin >> numVotes;
            candVotes.push_back(numVotes);
            totalVotes += numVotes;
            for (int k = 0; k < candVotes.size(); k++) {
                if (candVotes.at(k) == *max_element(candVotes.begin(), candVotes.end())) {
                    winner = k;
                }
            }           
        }
        int winnerVotes = candVotes.at(winner);
        candVotes.erase(candVotes.begin()+ winner);
        bool multWin = false;
        for (int j = 0; j < candVotes.size(); j++) {
            if (candVotes.at(j) == winnerVotes) {
                multWin = true;
            }
        }
        if (multWin) {
            cout << "no winner\n";
        }
        else {
            if (static_cast<double>(totalVotes) / winnerVotes < 2) {
                cout << "majority ";
            }
            else {
                cout << "minority ";
            }
            cout << "winner " << winner + 1 << endl;
        }
    }

    return 0;
}
