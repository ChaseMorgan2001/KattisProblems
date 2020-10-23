#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n[10];

    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        int sum = 1;
        cin >> n[i];
        for (int j = 1; j <= n[i]; j++)
        {
            sum *= j;
        }
        string x = to_string(sum);
        x.erase(x.begin(), x.end() - 1);
        cout << x << endl;
    }
    return 0;
}
