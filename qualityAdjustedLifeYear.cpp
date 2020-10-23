#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    double n, q, y, QALY=0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> q >> y;
        QALY = QALY + (q*y);
    }
    for (int i = 0; i < 1; i++)
    {
        cout << fixed << setprecision(3);
        cout << QALY << endl;
    }

    return 0;
}
