#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		if (j < 0)
			cout << j << " ";
		else
			cout << j + 2 << " ";
	}
	cout << endl;
	return 0;
}

