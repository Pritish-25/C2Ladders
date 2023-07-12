/* 
	CODE BY PONTUS
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int v[n+1] = {0};
	for (int i = 0; i < n-1; ++i)
	{
		int x;
		cin >> x;
		v[x]++;
	}
	for (int i = 1; i <=n; ++i)
	{
		if(v[i] == 0)
		{
			cout << i;
			break;
		}
	}
}