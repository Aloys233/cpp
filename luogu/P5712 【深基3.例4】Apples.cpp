#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 0 && n < 2) {
		cout << "Today, I ate " << n << " apple.";
	} else if (n >= 2) {
		cout << "Today, I ate " << n << " apples.";
	}
	return 0;
}
