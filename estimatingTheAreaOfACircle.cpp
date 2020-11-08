#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, m, c;
    while (cin) {
        cin >> r >> m >> c;
        if (r != 0 && m != 0 && c != 0) {
            double piEstimate = 4.0 * (c / m);
            double circleArea = piEstimate * (r * r);
            double trueArea = M_PI * (r * r);
            cout << trueArea << " " << circleArea << endl;
        }
        else { break; }
    }


    return 0;
}
