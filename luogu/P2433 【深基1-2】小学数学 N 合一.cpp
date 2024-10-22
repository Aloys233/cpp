#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	if (T == 1) {
		cout << "I love Luogu!";
	} else if (T == 2) {
		cout << 2 + 4 << " " << 10 - 2 - 4;
	} else if (T == 3) {
		int a=14/4;
		cout<<a<<endl;
		cout<<a*4<<endl;
		cout<<14-a*4<<endl;
	} else if (T == 4) {
		cout<<fixed<<setprecision(3)<<1.0*500/3;
	} else if (T == 5) {
		cout<<(220+260)/(20+12);
	} else if (T == 6) {
		cout<<sqrt(6*6+9*9);
	} else if (T == 7) {
		int a=100;
		a+=10;
		cout<<a<<endl;
		a-=20;
		cout<<a<<endl;
		a=0;
		cout<<a<<endl;
	} else if (T == 8) {
		int r=5;
		double pi=3.141593;
		cout<<2*pi*r<<endl;
		cout<<r*r*pi<<endl;
		cout<<4.0/3*pi*r*r*r<<endl;
	} else if (T == 9) {
		cout<<(((1+1)*2+1)*2+1)*2;
	} else if (T == 10) {
		cout<<"9";
	} else if (T == 11) {
		cout<<1.0*100/3;
	} else if (T == 12) {
		cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);
	} else if (T == 13) {
		int r1=4,r2=10;
		double pi=3.141593;
		double v=4.0/3*pi*r1*r1*r1+4.0/3*pi*r2*r2*r2;
		v=pow(v,1.0/3);
		printf("%.0lf\n",v);
	} else if (T == 14) {
		cout<<50<<endl;
	}
	return 0;
}
