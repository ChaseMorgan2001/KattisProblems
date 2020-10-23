#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h, v, ans;
    const double PI = 3.14159265358979323846;

    cin >> h >> v;

    double rad = v * (PI / 180.0);

    ans = ceil(h / sin(rad));

    if ((1 <= h <= 10000) && (1 <= v <= 89))
        cout << ans << endl;
    
    return 0;
}
