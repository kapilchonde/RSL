#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// %20

int URLifyString(char str[])
{
	int n=0,j=0,spaces=0;
	for(int i=0;str[i]!='\0';i++) 
	{
		n++;
		if(str[i] == ' ' ) spaces++;
	}
	j = n-1;
	
	while(str[j--] == ' ') 
	{
		n--; spaces--;
	}
	
	int newLength  = n + spaces*2 + 1 ;
	str[newLength-1] = '\0';
	
	j = newLength-2;	
	for(int i=n-1;i>=0;i--)
	{
		if(str[i] == ' ') {
			str[j] = '0'; 
			str[j-1] = '2';
			str[j-2] = '%';
			j-=3;
		}
		else{
			str[j] = str[i];
			j--;
		}
	}
	
	
	return newLength;
}


int main()
{
	char str[MAX] = "vishal kishor khedekar   ";
	
	int n = URLifyString(str);
	
	for(int i=0;i<n;i++) cout << str[i] ;
	
	return 0;
}