#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    int n, b[1000];
    double p[1000], t, ABPM_max, ABPM_min, BPM;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i] >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        BPM = (60 * b[i]) / p[i];
        t = 60 / p[i];
        ABPM_min = BPM - t;
        ABPM_max = BPM + t;
        cout << fixed << setprecision(4);
        cout << ABPM_min << ' ' << BPM << ' ' << ABPM_max << endl;
    }

    return 0;
}
