#include <iostream>
using namespace std;

int main()
{
    int n, e[100], r[100], c[100];

    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> r[i] >> e[i] >> c[i];
    for (int i = 0; i < n; i++)
    {
        if (r[i] + c[i] < e[i])
            cout << "advertise" << endl;
        else if (r[i] + c[i] > e[i])
            cout << "do not advertise" << endl;
        else if (r[i] + c[i] == e[i])
            cout << "does not matter" << endl;
    }

    return 0;
}
