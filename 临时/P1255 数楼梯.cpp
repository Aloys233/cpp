#include <iostream>

using namespace std;

int a[10086];

int aaa(int n){
	if(n==2){
		return 2;
	}
	if(n==1){
		return 1;
	}
	if(!a[n]){
		a[n]=aaa(n-1)+aaa(n-2);
	}
	return a[n];
}

int main(){
	int N;
	cin>>N;
	a[1]=1;
	a[2]=2;
	cout<<aaa(N);
	return 0;
}
