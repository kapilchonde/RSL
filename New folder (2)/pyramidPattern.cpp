#include<bits/stdc++.h>
using namespace std;


void pyramid(int n)
{
	int k = 2*n-1;
	for(int i=0;i<n;i++)
	{
		int mid = k/2;
		int count = 0;
		for(int j=0;j<k;j++)
		{
			if(j>= mid-i && j <= mid+i) 
			{
				if(count%2 == 0)cout << "* ";
				else cout << "  ";
				count++;
			}
			else cout << "  ";
		}
		cout << "\n";
	}
	cout << endl;
}

void HollowPyramid(int n)
{
	int k = 2*n-1;
	for(int i=0;i<n;i++)
	{
		int mid = k/2;
		for(int j=0;j<k;j++){
			if(j== mid-i || j == mid+i) cout << "* ";
			else cout << "  ";
		}
		cout << "\n";
	}
	for(int i=0;i<n;i++){
		cout << "*   ";
	}
	cout << endl;
}

void upperTraingular(int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout << "* " ;
		}
		cout << endl;
	}	
	cout << endl;
}

void lowerTraingular(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++){
			cout << "* " ;
		}
		cout << endl;
	}	
	cout << endl;
}

void diamond(int n)
{
	int k = 2*n-1;
	for(int i=0;i<n;i++)
	{
		int mid = k/2;
		for(int j=0;j<k;j++){
			if(j>= mid-i && j<= mid+i) cout << "* ";
			else cout << "  ";
		}
		cout << "\n";
	}
	for(int i=n-2;i>=0;i--)
	{
		int mid = k/2;
		for(int j=0;j<k;j++){
			
			if(j>= mid-i && j<= mid+i) cout << "* ";
			else cout << "  ";
		}
		cout << "\n";
	}
	cout << endl;
}



int main()
{
	int n; cin >> n;
	
	pyramid(n) ;
	HollowPyramid(n);
	upperTraingular(n);
	lowerTraingular(n);
	diamond(n);
	
 	return 0;
}




