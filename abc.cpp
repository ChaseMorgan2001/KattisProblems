#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    int x[] = { a,b,c };
    sort(x, x + 3);

    a = x[0];
    b = x[1];
    c = x[2];

    string order;
    cin >> order;

    if (order == "ABC")
        cout << a << " " << b << " " << c;
    else if (order == "ACB")
        cout << a << " " << c << " " << b;
    else if (order == "BAC")
        cout << b << " " << a << " " << c;
    else if (order == "BCA")
        cout << b << " " << c << " " << a;
    else if (order == "CAB")
        cout << c << " " << a << " " << b;
    else if (order == "CBA")
        cout << c << " " << b << " " << a;

    return 0;
}
