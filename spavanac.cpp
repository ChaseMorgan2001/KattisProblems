#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    if (M < 45 && H > 0)
        cout << (24 - (24 - H)) - 1 << " " << 60 - (45 - M) << endl;
    else if (M < 45 && H == 0)
        cout << 23 << " " << 60 - (45 - M) << endl;
    else 
        cout << H << " " << M - 45 << endl;

        return 0;
}
