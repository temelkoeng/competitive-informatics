#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int mountains = 0;
	int level = 0;
	bool flag = false;
	int steps;
	cin >> steps;

	queue<int> path;

	for (int i = 0; i < steps; i++)
	{
		char a;
		cin >> a;

		if (a == 'U')
		{
			path.push(1);
		}
		else if (a == 'D')
		{
			path.push(-1);
		}
	}

	while (!path.empty()) {
		int position = path.front();

		level += position;

		if (level <= -2 || level >= 2)
		{
			flag = true;
		}

		if (level == 0 && flag)
		{
			mountains++;
			flag = false;
		}
		path.pop();
	}

	cout << mountains << endl;
}
