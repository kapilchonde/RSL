#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	
	int a[n][n] ;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin >> a[i][j];
	}
	
	
	// rotate by 90
	int b[n][n];
	int p=0,q=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			b[p][q] = a[j][i];
			q++; 
		}
		p++;
		q=0;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout << b[i][j] << " ";
		cout << endl;
	}

	
	return 0;
}