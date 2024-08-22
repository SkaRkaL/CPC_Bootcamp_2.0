#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++)
		cin >> x[i];

	int m;
	cin >> m;
	vector<int> y(m);
	for (int j = 0; j < m; j++)
		cin >> y[j];
	
	int count = 0;
	int i = 0;
	vector<int> res;
	while (i < n)
	{
		bool flag = false;
		int j = 0;
		while (j < m)
		{
			if (x[i] == y[j])
			{
				flag = true;
				break;
			}
			j++;
		}
		if (!flag)
		{
			count++;
			res.push_back(x[i]);
		}
		i++;
	}
	cout << count << '\n';
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i];
		if (i != res.size() - 1)
            cout << ' ';
	}
	cout << '\n';
}
