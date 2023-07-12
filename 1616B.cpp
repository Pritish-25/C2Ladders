/*
  CODE BY PONTUS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char s[n];
		for(int i=0;i<n;i++)
		cin >> s[i];
		vector<char> v;
		v.push_back(s[0]);
		if(s[0] == s[1])
		{
			cout << s[0] << s[0] << "\n";
		}
		else{
			for(int i=1;i<n;i++)
			{
				if(s[i] <= s[i-1])
				v.push_back(s[i]);
				else
				break;
			}
			for(int i=0;i<v.size();i++)
			{
				cout << v[i];
			}
			for(int i=(v.size() - 1);i>=0;i--)
			{
				cout << v[i];
			}
			cout << "\n";
	}
}
	
	return 0;
}