#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int N, W, H;
    int match[50];

    cin >> N >> W >> H;

    for (int i = 0; i < N; i++)
    {
        cin >> match[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        if ((match[i] <= H && i <= W) || match[i] <= (sqrt((W*W)+(H*H))))
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }

    return 0;
}
