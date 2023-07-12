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
		long long int hc,dc,hm,dm,k,w,a,b,c;
		cin >> hc >> dc;
		cin >> hm >> dm;
		cin >> k >> w >> a;
		bool flag = false;
		long long x=hc,y=dc;
		for(int i=0;i<(k+1);i++)
		{
		hc = x + (k-i)*a;
		dc = y + i*w;
		if(hm%dc==0)
			c = hm/dc;
		else
			c = hm/dc + 1;
		if(hc%dm==0)
			b = hc/dm;
		else
			b = hc/dm + 1;
		if(c <= b)
		{
			flag = true;
			break;
		}
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
	}
	
}