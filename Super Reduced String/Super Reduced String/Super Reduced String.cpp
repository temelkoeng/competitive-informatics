#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

	int i = 0;

	while (i < s.length() - 1)
	{
		if (s[i] == s[i + 1])
		{
			s.erase(i, 2);
			i = -1;
		}
		
		i++;

		if (s.empty())
		{
			break;
		}
	}
	if (s.empty())
	{
		cout << "Empty String";
	}
	else
	{
		cout << s << endl;
	}

	return 0;
}