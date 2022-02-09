#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int V)
{
	if (V == 0) return 0;
	int ans = INT_MAX;
	
	for (int i=0; i<m; i++)
	{
		if (coins[i] <= V)
		{
			int sub_ans = minCoins(coins, m, V-coins[i]);
			if (sub_ans < INT_MAX)
				ans = sub_ans + 1;
		}
	}
	return ans;
}

int main()
{
	int coins[] = {5,2};
	int m = 2;
	int V = 10;
	cout << minCoins(coins, m, V);
	return 0;
}
