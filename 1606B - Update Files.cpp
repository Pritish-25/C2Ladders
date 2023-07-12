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
		long long int n,k;
		cin >> n >> k;
		long long int x = 1,ans=0;
		while(x<n)
		{
			if(x <= k)
			{
				x = x*2;
				ans++;
			}
			else{
				n = n - x;
				if(n%k==0)
					ans = ans + n/k;
				else
					ans = ans + n/k + 1;
				break;
			}
		}
		cout << ans << "\n";
	}
	
}