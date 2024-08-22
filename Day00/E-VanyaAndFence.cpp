#include <iostream>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n, h;
	cin >> n >> h;
	ll width = 0;
	for (int j = 0; j < n; j++)
	{
		ll a;
		cin >> a;
		if (a > h)
			width += 2;
		else
			width += 1;
	}
	cout << width << endl;
	return 0;
}