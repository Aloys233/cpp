#include <iostream>

using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	string t;
	int i;
	t=a;
	a="";
	for(i=0;i<t.length();i++){
		a=t[i]+a;
	}
	
	return 0;
}
