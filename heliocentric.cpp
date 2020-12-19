#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    int e, m;
    int casenum = 0, days = 0;
    while (cin >> e >> m) {
        days = 0;
        casenum++;
        cout << "Case " << casenum << ": ";
        while (true) {

            if (m == 0 && e == 0) { break; }
            days++;
            e++;
            m++;
            e %= 365;
            m %= 687;
        }
        cout << days << endl;
    }
    return 0;
}
