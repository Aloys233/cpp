#include <bits/stdc++.h>

using namespace std;

int local(int n) {
	return n * 5;
}

int luogu(int n) {
	return n * 3 + 11;
}

int main() {
	int a;
	cin >> a;
	if (local(a) < luogu(a)) {
		cout << "Local";
	} else if (local(a) > luogu(a)) {
		cout << "Luogu";
	}
	return 0;
}
