#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<long long> times; 
    long long time = 0;
    for (int i = 0; i < n; i++){
        long long t;
        cin >> t;
        times.push_back(t);
    }

     if (n % 2  == 1){
        cout << "still running\n";
    }
    else {
        for (int i = 0; i < n; i += 2){
            long long increment = times[i+1] - times[i];
            time += increment; 
        }
        cout << time << endl;
    }
    return 0;
}
