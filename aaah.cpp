#include <iostream>
#include <string>
using namespace std;

int main()
{
    string jon, doctor;

    cin >> jon;
    cin >> doctor;

    if (jon.length() < doctor.length())
        cout << "no";
    else if(jon.length()>= doctor.length())
        cout << "go";

    return 0;
}
