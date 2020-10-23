#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    double n[1000];

    cin >> t;

    for (int i = 0; i < t; i++)
        cin >> n[i];
        
    for (int i = 0; i < t; i++)
        cout << ceil(n[i]/400) << endl;

    return 0;
}
