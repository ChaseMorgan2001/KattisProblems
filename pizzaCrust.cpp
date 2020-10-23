#include <iostream> 
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    int r, c;

    cin >> r >> c;
    cout << fixed << setprecision(6);
    cout << (M_PI*(r - c)*(r - c)) / (M_PI*r*r) * 100;

    return 0;
}
