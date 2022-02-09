#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
	int s = a^b;
	int carry = a&b;
	
	if(carry == 0) return s;
	else return sum(s,carry<<1);
}

int oddEven(int n)
{
	if((n & 1) == 1) return 1;
	else return 0; 
}


int main()
{
	
	int a,b; cin >> a >> b;
	cout << sum(a,b) << endl;
	cout << oddEven(2) << endl;
	return 0;
}