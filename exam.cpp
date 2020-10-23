#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num_correct, num_questions, diff, same = 0;
    string my_answers, friend_answers;

    cin >> num_correct;
    cin >> my_answers;
    cin >> friend_answers;

    num_questions = my_answers.length();
    
    for (int i = 0; i < num_questions; i++)
    {
        if (my_answers[i] == friend_answers[i])
            same++;
    }

    diff = num_questions - same;

    if (same <= num_correct)
        cout << (num_questions - (num_correct - same));
    else
        cout << (num_correct + diff);

    return 0;
}
