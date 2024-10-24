#include <bits/stdc++.h>

using namespace std;

int runnian(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int a;
	cin >> a;
	cout << runnian(a);
	return 0;
}
