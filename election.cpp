#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<pair<string, string>> cands;
    vector<int> votes;
    int n, m;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        string cand, party;
        pair<string, string> c;
        pair<string, int> vote;
        getline(cin, cand);
        getline(cin, party);
        c.first = cand;
        c.second = party;
        votes.push_back(0);
        cands.push_back(c);
    }

    cin >> m;
    cin.ignore();
    for (int i = 0; i < m; i++){
        string vote;
        getline(cin, vote);
        for (int j = 0; j < n; j++){
            if (cands[j].first == vote){
                votes[j]++;
            }
        }
    }

    int index, max = 0;
    bool tie = false;
    for (int i = 0; i < n; i++){
        if (votes[i] == max){
            tie = true;
        }
        if (votes[i] > max){
            max = votes[i];
            index = i;
            tie = false;
        }
    }
    
    if (!tie){
        cout << cands[index].second << endl;
    }
    else {
        cout << "tie" << endl;
    }
    
    return 0;
}
