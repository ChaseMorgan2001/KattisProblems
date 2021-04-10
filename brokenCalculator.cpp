#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long prevRes = 1;
    cin >> n;
    string eq;
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin, eq);
        stringstream ss;
        ss << eq;
        long long op1, op2;
        char oper;
        ss >> op1;
        ss >> oper;
        ss >> op2;
        long long ans = 0;
        if (oper == '*'){
            ans = op1 * op2;
            ans *= ans;
        }
        else if (oper == '+'){
            ans = op1 + op2;
            ans -= prevRes;
        }
        else if (oper == '-'){
            ans = op1 - op2;
            ans *= prevRes;
        }
        else {
            if (op1 % 2 == 0){
                ans = op1 / 2;
            }
            else {
                op1++;
                ans = op1 / 2;
            }
        }
        prevRes = ans;
        cout << ans << endl;
    }
    return 0;
}
