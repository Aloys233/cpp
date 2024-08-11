#include <iostream>

using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int fenqu(int arr[],int low,int high){
	int temp=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(arr[j]<=temp){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}

void QuickSort(int arr[],int low,int high){
	if(low<high){
		int ii=fenqu(arr,low,high);
		QuickSort(arr,low,ii-1);
		QuickSort(arr,ii+1,high);
	}
}

int main(){
	int arr[10]={1,6,3,7,3,5,1,0,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr,0,n-1);
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
}
