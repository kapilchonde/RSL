#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    if(n == 0) return 0;
    else return n%2 + decimalToBinary(n/2)*10;
} 

int binaryToDecimal(int n, int i)
{
    if(n == 0) return 0;
    else return (n%10)*(int(pow(2,i))) + binaryToDecimal(n/10,++i);
}

int binaryToOct(int n) {
    if(n == 0) return 0;
    else {
        int a = n%10, b = (n%100)/10 , c = (n%1000)/100;
        return a+b*2+c*4 + binaryToOct(n/1000)*10;
    }
}

char hexcode(int n)
{
    switch(n) {
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        case 15: return 'F';
    }
}

string binaryToHex(int n)
{
    string hex = "";
    while(n){
        int a = n%10, b = (n%100)/10 , c = (n%1000)/100,
        d = (n%10000)/1000;
        
        int x = a+b*2+c*4+d*8 ;
        if(x>9) {
            hex += hexcode(x);
        }
        else hex += char(x+48);
        n = n/10000;
    }
    return hex;
}



int main()
{
    int n; cin >> n;
    cout << binaryToHex(n) << endl;
    cout << binaryToOct(n) << endl;
    cout << binaryToDecimal(n,0) << endl;
     return 0;
}