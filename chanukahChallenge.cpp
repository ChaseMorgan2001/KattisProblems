#include <iostream>
using namespace std;

int main()
{
    int p, k, n, candles[10000];

    cin >> p;
    
    for (int i = 0; i < p; i++)
    {
        cin >> k >> n;
        candles[i] = 0;
        for (int j = 0; j <= n; j++)
        {
            candles[i] += j;
            if (j == n)
                candles[i] += n;
            else if (i == 0 && j == n)
                candles[i] += n;
        }
    }
    for (int i = 0; i < p; i++)
    {
        cout << i+1 << " " << candles[i] << endl;
    }
    return 0;
}
