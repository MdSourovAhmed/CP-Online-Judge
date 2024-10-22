#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<char, char> m_L = {{'W', 'S'}, {'S', 'E'}, {'E', 'N'}, {'N', 'W'}};
map<char, char> m_R = {{'W', 'N'}, {'S', 'W'}, {'E', 'S'}, {'N', 'E'}};
map<char, int> m_X = {{'W', -1}, {'E', 1}};
map<char, int> m_Y = {{'S', -1}, {'N', 1}};
// void print(map<char, char> &m)
// {
// 	for (auto a : m)
// 		cout << a.first << "= " << a.second << endl;
// }

int main()
{
	// print(m_L);
	// cout<<endl<<endl;
	// print(m_R);
	int a, b;
	cin >> a >> b;
	bool grid[a + 1][b + 1] = {0};
	int x, y;
	char c;
	string s;
	while (cin >> x >> y >> c >> s)
	{
		bool ans = true;
		for (char &p : s)
		{
			if (p == 'L')
				c = m_L[c];
			else if (p == 'R')
				c = m_R[c];
			else
			{
				if (c == 'W' || c == 'E')
					x += m_X[c];
				else
					y += m_Y[c];
			}
			if (x < 0 || y < 0 || x > a || y > b)
			{
				if (c == 'W' || c == 'E')
					x -= m_X[c];
				else
					y -= m_Y[c];

				if (grid[x][y])
				{
					continue;
				}
				grid[x][y] = 1;
				ans = false;
				break;
			}
		}
		// cout<<"dbmvbjbjd\n";
		if (ans)
			cout << x << " " << y << " " << c << endl;
		else
			cout << x << " " << y << " " << c << " LOST\n";
	}
}

// inputs:
// 5 3
// 1 1 E
// RFRFRFRF
// 3 2 N
// FRRFLLFFRRFLL
// 0 3 W
// LLFFFLFLFL

// outputs:
// 1 1 E
// 3 3 N LOST
// 2 3 S
