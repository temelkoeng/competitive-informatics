#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

	int counter = 1;

	for (int i = 0; i < input.length(); i++)
	{
		if ((int)input[i] < 97)
		{
			counter++;
		}
	}

	cout << counter << endl;
}