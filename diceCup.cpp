#include <iostream>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    if (b < a) {
        int c = a;
        a = b;
        b = c;
    }

    int i;
    
    for (i = a + 1; i < b + 2; ++i) {
        cout << i << endl;
    }

    return 0;
}
