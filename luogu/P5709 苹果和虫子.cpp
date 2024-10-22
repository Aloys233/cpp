#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m;
	double t,s;
	cin>>m>>t>>s;
	if(t==0){
		cout<<0;
		return 0;
	}
	int end=m-ceil(s/t);
	if(end<0){
		end=0;
	}
	cout<<end;
	return 0;
}
