/* 
	CODE BY pontus
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

void solve(){
	string s;
	cin >> s;
	int n = s.size();
	for (int i = (n-1); i >= 0; i--)
	{
		int x = s[i] - '0' + s[i-1] - '0';
		if(x>9)
		{
			s[i-1] = x/10 + '0';
			s[i] = x%10 + '0';
			cout << s << "\n";
			return;
		}
	}
	int x = s[0] - '0' + s[1] - '0';
	s[1] = x + '0';
	s.erase(s.begin());
	cout << s << "\n";
	return;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	
}