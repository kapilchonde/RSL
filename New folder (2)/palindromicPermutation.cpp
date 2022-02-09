#include<bits/stdc++.h>
using namespace std;

bool isPalindromicPermutation(string s)
{
	int count[123] = {0};
	int flag[123] = {0};
	int x = 0;
	
	for(char c:s) count[c]++;
	
	for(char c:s)
	{
		if(flag[c] == 0 && c!= ' '){
			
			if(count[c]%2 == 1) x++;
			flag[c] = 1;
 		}
	}
	
	return x == 1;
}

int main()
{	
	string s; getline(cin,s);
	
	cout << isPalindromicPermutation(s);
	
	return 0;
}