#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x[1000], y[1000], z[1000], times=0;
    
        do
        {
            cin >> x[times] >> y[times] >> z[times];
            times++;
        } while (x[times -1] != 0 && y[times-1] != 0 && z[times -1] != 0);
        for (int i = 0; i < times-1; i++)
        {
            int a = x[i], b = y[i], c = z[i];
            if (((pow(a,2) + pow(b,2)) == pow(c,2) || (pow(b,2) + pow(c,2)) == pow(a,2) || (pow(a,2) + pow(c,2)) == pow(b,2)) && (a != 0 && b != 0 && c != 0))
                cout << "right" << endl;
            else if (a == 0 && b == 0 && c == 0)
                break;
            else if ((pow(a,2) + pow(b,2)) != pow(c,2) || (pow(b,2) + pow(c,2)) != pow(a,2) || (pow(a,2) + pow(c,2)) != pow(b,2))
                cout << "wrong" << endl;
        }
    return 0;
}
