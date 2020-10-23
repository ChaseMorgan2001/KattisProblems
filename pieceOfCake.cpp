#include <iostream>
using namespace std;

int n, h, v;
int p1, p2, p3, p4;
const int thickness = 4;

int main() {
    cin >> n >> h >> v;

    p1 = h * v * thickness;
    p2 = (n - v) * h * thickness;
    p3 = v * (n - h) * thickness;
    p4 = (n - v) * (n - h) * thickness;

    int max = 0;
    if (p1 >= p2 && p1 >= p3 && p1 >= p4)
        max = p1;
    else if (p2 >= p1 && p2 >= p3 && p2 >= p4)
        max = p2;
    else if (p3 >= p1 && p3 >= p2 && p3 >= p4)
        max = p3;
    else if (p4 >= p1 && p4 >= p2 && p4 >= p3)
        max = p4;

    cout << max;

    return 0;
}
