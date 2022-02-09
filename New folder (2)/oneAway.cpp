#include<bits/stdc++.h>
using namespace std;

bool oneReplace(string a, string b)
{
	bool f = false;
	for(int i=0;i<a.length();i++)
	{
		if(a[i] != b[i]){
			if(f) return false;
			f = true;
		}
	}
	return true;
}


bool oneEdit(string a, string b)
{
	int i=0,j=0;
	while(i<a.length() && j<b.length())
	{
		if(a[i] != b[j]){
			if(i!=j) return false;
			j++;
		}
		else i++, j++;
	}
	return true;
}


bool OneAway(string a, string b)
{
	int n = a.length(), m = b.length();

	if( n == m ) return oneReplace(a,b);
	else if( abs( n-m ) == 1 ) 
	{
		if( n>m ) return oneEdit(a,b);
		else return oneEdit(b,a);
	}
		
	return false;
}

int main()
{
	string a,b; cin >> a >> b;
	cout << OneAway(a,b) ;
	return 0;
}









