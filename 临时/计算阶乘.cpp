#include <iostream>

using namespace std;

int aaa(int n){
	if(n==1){
		return 1;
	}
	return n*aaa(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<aaa(n);
	return 0;
}
