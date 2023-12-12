#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[51];
	int n;
	cin >> n;
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] + n <= 'z')
			a[i] = a[i] + n;
		else if (a[i] + n > 'z')
			a[i] = 'a' + n - 'z' + a[i] - 1;
	}
	cout << a;
	return 0;
}