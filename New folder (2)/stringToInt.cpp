#include<bits/stdc++.h>
using namespace std;

int sti(string s)
{
	int  n = s.length();
	int ans = int(s[n-1]-48);
	for(int i=n-2;i>=0;i--)
	{
		int temp = int(s[i]-48);
		ans = ans*10 + temp;
	}
	
	n = ans;
	ans = 0;
	while(n){
		int r = n%10;
		ans = ans*10 + r;
		n = n/10;
	}
	
	return ans;
}

int main()
{
	string s; cin >> s;
	
	cout << sti(s) << endl;
	
	
	return 0;
}