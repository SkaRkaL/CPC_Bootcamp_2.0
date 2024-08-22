#include <iostream>
#include <stack>

using namespace std;


#define endl '\n'

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
	
	int T;
	cin >> T;

	stack<int> s;
	while (T--)
	{
		int q;
		cin >> q;

		if (q == 1)
		{
			int i;
			cin >> i;
			s.push(i);
		}
		else if (q == 2)
		{
			if (!s.empty())
				s.pop();
		}
		else if (q == 3)
		{
			if (!s.empty())
				cout << s.top() << endl;
			else
				cout << "Empty!" << endl;
		}
	}
	return 0;
}