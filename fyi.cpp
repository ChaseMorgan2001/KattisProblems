#include <bits/stdc++.h>
using namespace std;

int main(){

    string phoneNum;
    cin >> phoneNum;

    if (phoneNum.substr(0,3) == "555"){
        cout << "1\n";
    }
    else {
        cout << "0\n";
    }
    return 0;
}
