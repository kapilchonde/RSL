#include<bits/stdc++.h>
using namespace std;

// TC-> O(n) SC-> O(n)
bool isUnique(string s)
{
	set<char> x;
	for(char c:s) x.insert(c);
	
	return x.size() == s.length();
}

// TC-> O(n) , SC-> O(1)
bool isUnique2(string s)
{
	int check[27] = {0};
	for(char c:s)
	{
		if(check[c-'a'] != 0) return false;
		check[c-'a'] = true;
	}
	return true;
}

int main()
{
	string s; cin >> s;
	cout << isUnique(s) << endl;
	cout << isUnique2(s) << endl;
	return 0;
}