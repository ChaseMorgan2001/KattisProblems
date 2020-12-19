#include <iostream>
#include <vector>
using namespace std;

vector<bool> playerOdds;
vector<int> order;
vector<vector<char>> odds;
int n;

void dfs(int curr) {
    if (playerOdds[curr]) return;
    playerOdds[curr] = true;
    order.push_back(curr);
    for (int i = 0; i < n; i++) {
        if (odds[curr][i] == '1') {
            dfs(i);
        }
    }
}

int main() {

    cin >> n;
    odds.resize(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> odds[i][j];
        }
    }

    playerOdds.resize(n, false);
    dfs(0);

    for (int i = 0; i < playerOdds.size(); i++) {
        if (!playerOdds.at(i)) {
            cout << "impossible" << endl;
            return 0;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << order[i] << " ";
    }
    cout << endl;
}
