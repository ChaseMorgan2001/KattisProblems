#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, t, days=0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t < 0)
            days++;
    }
    cout << days;
    
    return 0;
}
