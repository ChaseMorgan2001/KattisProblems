#include <iostream>
#include <string>
using namespace std;

int main()
{
    long upper, lower, c0, c1, c2 ,c3, c4, c5, count = 0;

    cin >> lower >> upper;

    for (long i = lower; i >= lower, i <= upper; i++)
    {
        string nums = to_string(i);

        if (nums[0] == nums[1] || nums[0] == nums[2] || nums[0] == nums[3] || nums[0] == nums[4] || nums[0] == nums[5] || nums[0] == '0')
            continue;

        if (nums[1] == nums[0] || nums[1] == nums[2] || nums[1] == nums[3] || nums[1] == nums[4] || nums[1] == nums[5] || nums[1] == '0')
            continue;

        if (nums[2] == nums[0] || nums[2] == nums[1] || nums[2] == nums[3] || nums[2] == nums[4] || nums[2] == nums[5] || nums[2] == '0')
            continue;

        if (nums[3] == nums[0] || nums[3] == nums[1] || nums[3] == nums[2] || nums[3] == nums[4] || nums[3] == nums[5] || nums[3] == '0')
            continue;

        if (nums[4] == nums[0] || nums[4] == nums[1] || nums[4] == nums[2] || nums[4] == nums[3] || nums[4] == nums[5] || nums[4] == '0')
            continue;

        if (nums[5] == nums[0] || nums[5] == nums[1] || nums[5] == nums[2] || nums[5] == nums[3] || nums[5] == nums[4] || nums[5] == '0')
            continue;


        if ((nums[0] - 48) != 0)
            c0 = i % (nums[0] - 48);
        else if ((nums[0] - 48) == 0)
            c1 = -1;

        if ((nums[1] - 48) != 0)
            c1 = i % (nums[1] - 48);
        else if ((nums[1] - 48) == 0)
            c1 = -1;

        if ((nums[2] - 48) != 0)
            c2 = i % (nums[2] - 48);
        else if ((nums[2] - 48) == 0)
            c2 = -1;

        if ((nums[3] - 48) != 0)
            c3 = i % (nums[3] - 48);
        else if (nums[3] - 48 == 0)
            c3 = -1;

        if ((nums[4] - 48) != 0)
            c4 = i % (nums[4] - 48);
        else if ((nums[4] - 48) == 0)
            c4 = -1;

        if ((nums[5] - 48) != 0)
            c5 = i % (nums[5] - 48);
        else if ((nums[0] - 48) == 0)
            c5 = -1;

        if (c0 == 0 && c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0 && c5 == 0)
        {
            count++;
        }
        if (upper < lower)
            break;
    }
    cout << count;
    return 0;
}
