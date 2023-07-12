/* 
	CODE BY PONTUS
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			if(k%2==0)
			{
				cout << "YES" << "\n";
			}
			else
				cout << "NO\n";
		}
		else if(n%2!=0)
		{
			if(k%2!=0)
				cout << "YES\n";
			else
				cout << "NO\n";
	    }
	    else
	    	cout << "NO\n";
	}
	
}