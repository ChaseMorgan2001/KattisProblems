#include <iostream> 
using namespace std;

int main()
{
    double n, a[10000], b[10000], c[10000];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] == c[i] || a[i] - b[i] == c[i] || a[i] * b[i] == c[i] || a[i] / b[i] == c[i] || b[i] - a[i] == c[i] || b[i] / a[i] == c[i])
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
