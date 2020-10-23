#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double C, L, length[100], width[100], cost, area=0;
    cin >> C;
    cin >> L;
    for (int i = 0; i < L; i++)
        cin >> width[i] >> length[i];
    for (int i = 0; i < L; i++)
        area += width[i] * length[i];
    cost= area*C;
    cout << fixed << setprecision(7);
    cout << cost;
    return 0;
}
