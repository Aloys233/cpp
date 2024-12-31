#include <bits/stdc++.h>

using namespace std;

int aa(int n){
	if(n%400==0||(n%4==0&&n%100!=0)){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int x,y;
	cin>>x>>y;
	int count=0;
	int arr[10086]={0};
	int j=0;
	for(int i=x;i<=y;i++){
		if(aa(i)){
			count++;
			arr[j]=i;
			j++;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
