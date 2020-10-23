#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3, score4, points[5], i, iterations = 0, max = 0;

    for (i = 0; i < 5; i++)
    {
        cin >> score1 >> score2 >> score3 >> score4;
        points[i] = score1 + score2 + score3 + score4;
    }
    for (i = 0; i < 5; i++)
    {
        if (points[i] > max)
        {
            max = points[i];
            iterations = i + 1;
        }   
    }
    cout << iterations << " " << max << endl;
    return 0;
}
