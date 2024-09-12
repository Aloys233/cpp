#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int IsPrime(int a){
	if(a < 2){
		return 0;
	}
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int temp;
	int arr[10086];
	int count=0;
	for(int i=0;i<n;i++){
		cin >> temp;
		if(IsPrime(temp)){
			arr[count]=temp;
			count++;
		}
	}
	for(int i=0;i<count;i++){
		cout <<arr[i]<<" ";
	}
}
