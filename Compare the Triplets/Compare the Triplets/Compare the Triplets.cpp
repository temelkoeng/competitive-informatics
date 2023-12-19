#include <iostream>
using namespace std;

int main()
{
    int bobInput[3];
    int aliceInput[3];
    int bobPoints = 0;
    int alicePoints = 0;

    for (int i = 0; i < 3; ++i)
    {
        cin >> bobInput[i];
    }

    for (int i = 0; i < 3; ++i)
    {
        cin >> aliceInput[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (bobInput[i] > aliceInput[i])
        {
            bobPoints++;
        }
        else if (bobInput[i] < aliceInput[i])
        {
            alicePoints++;
        }
    }

    cout << bobPoints << " " << alicePoints << endl;

    return 0;
}