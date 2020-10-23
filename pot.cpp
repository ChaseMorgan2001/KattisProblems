#include <iostream> 
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, num[10], newNum[10], newPow[10];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        string x = to_string(num[i]);
        string temp = x;
        x.erase(x.begin() + x.size() - 1);
        newNum[i] = stoi(x);
        temp.erase(temp.begin(), temp.end() - 1);
        newPow[i] = stoi(temp);
        sum += pow(newNum[i], newPow[i]);
    }
    cout << sum;

    return 0;
}
