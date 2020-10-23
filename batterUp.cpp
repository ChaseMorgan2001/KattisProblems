#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double n, plays, points=0, runs;
    
    cin >> n;
    runs = n;
    for (int i = 0; i < n; i++)
    {
        cin >> plays;
        if (plays > -1)
            points += plays;
        else
            runs--;
    }
    cout << fixed << setprecision(12) << points / runs;

    return 0;
}
