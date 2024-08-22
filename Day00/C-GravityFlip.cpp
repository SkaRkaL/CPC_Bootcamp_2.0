#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int	n;
	int	i;

	cin >> n;
	int	tab[n];
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	i = 0;
	sort(tab, tab + n);
	for (int i = 0; i < n; i++)
		cout << tab[i] << ' ';
	cout << endl;
}