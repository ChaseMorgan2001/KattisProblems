#include <iostream>
using namespace std;

int main()
{
    int p, k[10000], n[10000];

    cin >> p;
    
    for (int i = 0; i < p; i++)
    {
        cin >> k[i] >> n[i];
    }
    for(int i = 0; i < p; i++)
    {
        int s1 = 0, s2 = 0, s3 = 0;

        for (int j = 0; j <= n[i]; j++)
        {
            s1 += j;
        }
        for (int j = 0, evenCount = 0; evenCount <= n[i]; j++)
        {
            if ((j % 2) == 0)
            {
                s3 += j;
                evenCount++;
            }
        }
        for (int j = 0, oddCount = 0; oddCount < n[i]; j++)
        {
            if ((j % 2) != 0)
            {
                s2 += j;
                oddCount++;
            }
        }
        cout << k[i] << " " << s1 << " " << s2 << " " << s3 << endl;
    }
    return 0;
}
