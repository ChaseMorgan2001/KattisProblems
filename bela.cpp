#include <iostream> 
#include <string>
using namespace std;

int main()
{
    int n, sum=0;
    char b;
    string card[400];

    cin >> n >> b;

    for (int i = 0; i < 4 * n; i++)
    {
        cin >> card[i];
    }
    for (int i = 0; i < 4 * n; i++)
    {
        if (card[i].at(1) == b)
        {
            if (card[i].at(0) == 'A')
                sum += 11;
            if (card[i].at(0) == 'K')
                sum += 4;
            if (card[i].at(0) == 'Q')
                sum += 3;
            if (card[i].at(0) == 'J')
                sum += 20;
            if (card[i].at(0) == 'T')
                sum += 10;
            if (card[i].at(0) == '9')
                sum += 14;
            if (card[i].at(0) == '8')
                sum += 0;
            if (card[i].at(0) == '7')
                sum += 0;
        }
        else if (card[i].at(1) != b)
        {
            if (card[i].at(0) == 'A')
                sum += 11;
            if (card[i].at(0) == 'K')
                sum += 4;
            if (card[i].at(0) == 'Q')
                sum += 3;
            if (card[i].at(0) == 'J')
                sum += 2;
            if (card[i].at(0) == 'T')
                sum += 10;
            if (card[i].at(0) == '9')
                sum += 0;
            if (card[i].at(0) == '8')
                sum += 0;
            if (card[i].at(0) == '7')
                sum += 0;
        }
    }
    cout << sum;    

    return 0;
}
