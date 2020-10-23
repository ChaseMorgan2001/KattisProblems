#include <iostream>
using namespace std;

int main()
{
    int t, n, T, time, count=0;

    cin >> n >> T;
    for (int i = 0; i < n; i++)
    {
        time = 0;
        cin >> t;
        time += t;
        T -= time;
        if (T >= 0)
            count++;
    }
    cout << count;
    return 0;
}
