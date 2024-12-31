#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[10086];
	int n;
	int i=0;
	cin>>n;
	int m=n;
	while(n!=1){
		if(n%2!=0){
			n=n*3+1;
			arr[i]=n;
			i++;
		}else{
			n=n/2;
			arr[i]=n;
			i++;
		}
	}
	for(int j=i-1;j>=0;j--){
		cout<<arr[j]<<" ";
	}
	cout<<m;
	return 0;
}
