#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, i, j, k;

    cin >> a >> b >> c;
    cin >> i >> j >> k;

    cout << fixed << setprecision(6);
    double c1 = a / i;
    double c2 = b / j;
    double c3 = c / k;
    double small = min({ c1, c2, c3 });
    cout << a - small * i << " ";
    cout << b - small * j << " ";
    cout << c - small * k;
    return 0;
}
