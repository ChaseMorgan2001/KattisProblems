#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x[15], y[15], count = 0;
    string z[15];
    
    for (int i = 0; i < 15; i++)
    {
        cin >> x[i] >> y[i];
        count++;
        if (x[i] == 0 && y[i] == 0)
            break;
    }
    for(int i = 0; i < count; i++)
    {
        if (x[i] > y[i] && x[i] + y[i] != 13)
            z[i] = "To the convention.";
        else if (x[i] < y[i] && x[i] + y[i] != 13)
            z[i] = "Left beehind.";
        else if (x[i] == y[i] && x[i] + y[i] != 13)
            z[i] = "Undecided.";
        else if (x[i] + y[i] == 13)
            z[i] = "Never speak again.";
    }
    for (int i = 0; i < count-1; i++)
        cout << z[i] << endl;
    return 0;
}
