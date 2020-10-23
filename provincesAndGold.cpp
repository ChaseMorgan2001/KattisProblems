#include <iostream>
#include <string>
using namespace std;

int main() {

    int gold = 0, silver = 0, copper = 0, hand = 0, balance = 0;
    string victory, treasure;
    cin >> gold >> silver >> copper;

    hand = (gold + silver + copper);
    if (hand > 5) {
        cout << "cannot have more than five cards" << endl;
        cin >> gold >> silver >> copper;
    }

    balance = (gold * 3) + (silver * 2) + (copper * 1);
    if (balance >= 8) {
        victory = "Province";
    }
    else if (balance >= 5) {
        victory = "Duchy";
    }
    else if (balance >= 2) {
        victory = "Estate";
    }
    if (balance >= 6) {
        treasure = "Gold";
    }
    else if (balance >= 3) {
        treasure = "Silver";
    }
    else if (balance >= 0) {
        treasure = "Copper";
    }
    
    if (balance >= 2)
        cout << victory << " or " << treasure << endl;
    else
        cout << treasure << endl;

    return 0;
}
