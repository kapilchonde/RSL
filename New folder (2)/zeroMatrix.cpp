#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	
	int a[n][n] ;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin >> a[i][j];
	}
	
	int max = 3, min = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j] == 0)
			{
				//cout << i << " "<< j << endl;
				int p = i;
				int q = j;
				while(p <= max) {a[p][j] = 0; p++;}
				p = i; q = j;
				while(p >= min) {a[p][j] = 0; p--;}
				p = i; q = j;
				while(q <= max) {a[i][q] = 0; q++;}
				p = i; q = j;
				while(q >= min) {a[i][q] = 0; q--;}
			}
		}
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout << a[i][j] << " ";
		cout << endl;
	}

	
	
	return 0;
}