#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if ((m > 1 && m < n) && (n <= 1000000))
	{
		double* bills = new double[n];

		for (int i = 0; i < n; i++)
		{
			double element;
			cin >> element;

			if (element <= 400 && element > 0)
			{
				bills[i] = element;
			}
			else
			{
				bills[i] = -1;
			}
		}

		double* pays = new double[n];

		for (int i = 0; i < m; i++)
		{
			double element;
			cin >> element;

			pays[i] = element;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (bills[i] == pays[j])
				{
					bills[i] = -1;
					pays[j] = -1;
					break;
				}
			}
		}

		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (bills[i] < bills[j])
				{
					double a = bills[i];
					bills[i] = bills[j];
					bills[j] = a;
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			if (bills[i] != -1)
			{
				cout << bills[i] << " ";
			}
			else if (bills[i] == -1)
			{
				break;
			}
		}
	}
	return 0;
}