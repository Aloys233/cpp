#include<iostream>
#include<ctype.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		a[i] = toupper(a[i]);
	}
	cout << a;
	return 0;
}