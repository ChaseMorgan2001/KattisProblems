#include <iostream>
using namespace std;

int main()
{
    int N, X, P, total = 0;
    cin >> X;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> P;
        total += (X - P);
    }
    cout << total + X;
    return 0;
}
