/* 
	CODE BY PONTUS
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

void solve()
{
	int lines,n,m;
	cin >> lines >> n >> m;
	int mono[n],poly[m];
	for (int i = 0; i < n; ++i)
	{
		cin >> mono[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> poly[i];
	}
	int a=0,b=0;
	vector<int> v;
	for(int i=0;i<(m+n);i++)
		{
			if((a<=(n-1)) && (mono[a] == 0))
			{
				v.push_back(mono[a]);
				a++;
				lines++;
			}
			else if((b<=(m-1)) && (poly[b] == 0))
			{
				v.push_back(poly[b]);
				b++;
				lines++;
			}
			else
			{
				if(a <= (n-1))
				{
					if(lines >= mono[a])
					{
						v.push_back(mono[a]);
						a++;
					}
					else if((b<=(m-1)) && lines >= poly[b])
					{
						v.push_back(poly[b]);
						b++;
					}
					else
					{
						cout << "-1" << "\n";
						return;
					}
				}
				else
				{
					if(lines >= poly[b])
					{
						v.push_back(poly[b]);
						b++;
					}
					else
					{
						cout << "-1" << "\n";
						return;
					}
				}
			}
		}
	for (int i = 0; i < (m+n); ++i)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
	return;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--) solve();
	
}