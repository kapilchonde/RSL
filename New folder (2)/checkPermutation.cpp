#include<bits/stdc++.h>
using namespace std;

bool checkPermutation(string a, string b)
{
	sort( a.begin(), a.end() );
	sort( b.begin(), b.end() );	
	return a == b;
}

int main()
{
	string a,b; cin >> a >> b;
	cout << checkPermutation(a,b) ;
	
	return 0;
}