#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, s[10], t[10], miles[10], totalmiles[10], misum=0, x=0;

    do
    {
        misum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> t[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                miles[i] = s[i] * t[i];
            else
                miles[i] = s[i] * (t[i] - t[i - 1]);
            misum += miles[i];
        }
        for (int i = 0; i < n; i++)
            totalmiles[x] = misum;
        x++;
    } while (n != -1);
    for (int i = 0; i < x - 1; i++)
        cout << totalmiles[i] << " miles" << endl;
    return 0;
}
