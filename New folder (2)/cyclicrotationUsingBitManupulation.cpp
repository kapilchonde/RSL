// Problem: Cyclic shifts
// Contest: HackerEarth - Basic Programming - Bit Manipulation - Basics of Bit Manipulation
// URL: https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/lets-shift-2-36d90caa/
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		unsigned short n,m,x,y;
		char c;
		cin >> n >> m >> c;
		
		if(c == 'L')
		{
			 x = n << m ;
			 y = n >> (16-m);
			 n = x | y;
			cout << n << endl;
		}	
		else
		{
			 x = n << m ;
			 y = n >> (16-m);
			 n = x | y;
			cout << n << endl;
		}
		
	}
	return 0;
}