#include<bits/stdc++.h>
using namespace std;

int solve(int coins[], int n, int v)
{
	sort(coins,coins+n);
	int ans = 0;
	for(int i=n-1;i>=0;i--)
	{
		if(v>= coins[i]){
			int howmany = v/coins[i] ;
			v = v - howmany*coins[i];
			ans++;
		}
	}
	return ans;
}

int main()
{
	int n,v; cin >> n >> v;
	int coins[n];
	for(int i=0;i<n;i++) cin >> coins[i];
	
	cout << solve(coins,n,v) << endl;
	
	return 0;
}