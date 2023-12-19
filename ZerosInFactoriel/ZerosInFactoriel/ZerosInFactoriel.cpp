#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double n;
	cin >> n;

	if (n > 0 && n < 50000)
	{
		if (n < 5)
		{
			cout << "0" << endl;
		}
		else
		{
			int m = floor(n / 25.0);
			int result = floor(n / 5.0);
			result += m;
			cout << result << endl;
		}
	}
}