#include <iostream>
#include <string>
using namespace std;

int L, x, e, p=0, d=0;
string event;

int main() {
    cin >> L >> x;
    for (int i = 0; i < x; i++) {
        cin >> event >> e;
        if (event[0] == 'e') {
            if (p + e <= L)
                p += e;
            else
                d++;
        }
        else
            p -= e;
    }

    cout << d;

    return 0;
}
