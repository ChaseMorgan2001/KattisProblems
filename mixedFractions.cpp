#include <iostream>
using namespace std;

int num = 1, denom = 1;

int main() {
    while (num != 0 && denom != 0) {
        cin >> num >> denom;
        if (denom != 0) {
            cout << (num / denom) << " " << (num % denom) << " / " << denom << endl;
        }
    }
    return (0);
}
