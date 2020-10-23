#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    int paces;

    cin >> x;

    paces = round((1000 * (5280 * x)/ 4854));

    cout << paces;

    return 0;
}
