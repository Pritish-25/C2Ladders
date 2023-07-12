/* 
	CODE BY PONTUS
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n,h;
	cin >> n >> h;
	int arr[n];
	int t =0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i] <= h)
			t++;
		else if(arr[i] > h)
			t = t+2;
	}
	cout << t;
	
}