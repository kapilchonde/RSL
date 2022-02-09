#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
	int temp=1,sum=0;
	
	for(int i=n-1;i>0;i--){
		sum = arr[i] + temp;
		if(sum < 10){
			arr[i] = sum;
			sum;
			temp = 0;
		}
		else{
			temp = sum/10;
			arr[i] = sum%10 ;
		}
	}
	if(temp!=0){
		arr[0] = arr[0] + temp;
	}
}

int main()
{
	int n; cin >> n;
	int arr[n+1];
	arr[0] = 0;
	for(int i=1;i<=n;i++) cin >> arr[i];
	solve(arr,n+1);
	int k = arr[0]>0?0:1;
	for(int i=k;i<=n;i++) cout << arr[i] << " ";
 	return 0;
}







