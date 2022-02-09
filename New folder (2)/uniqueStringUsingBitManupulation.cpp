#include<bits/stdc++.h>
using namespace std;


// a to z 26 charecters 1 bit for each charecter

// int 4 bytes -> 
// 7 6 5 4 3 2 1 0
// [][][][][][][][1]
// [][][][][][][][]
// [][][][][][][][] 
// [][][][][][][][]

bool isUnique(string s)
{
	int mask = 0;
	
	for(	char c:s	)
	{
		int index = c-'a';
		int check = (1<<index);
		if( ( check & mask ) == 1 ) return false;
		mask = mask | (1<<index);
	}
	return true;
}

int main()
{
	string a; cin >> a;
	cout << isUnique(a) << endl;
	return 0;
}