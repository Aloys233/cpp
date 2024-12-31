#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin >> a;
	int count = 0;
	while (a > 1) {
		a = floor(a / 2);
		count++;
	}
	cout << count + 1;
	return 0;
}
