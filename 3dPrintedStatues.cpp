#include <iostream> 
using namespace std;

int main()
{
    int  num_statues, statues = 0, days = 0, printers = 1;
    
    cin >> num_statues;

    while (num_statues > printers * 2)
    {
        printers *= 2;
        days += 1;
    }

    while (statues < num_statues)
    {
        statues += printers;
        days += 1;
    }

    cout << days;

    return 0;
}
