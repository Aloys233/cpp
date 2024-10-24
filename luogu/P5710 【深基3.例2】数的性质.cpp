#include <iostream>

using namespace std;

int oushu(int n) {
	if (n % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int eee(int n) {
	if (n > 4 && n <= 12) {
		return 1;
	} else {
		return 0;
	}
}

int aaa(int n) {
	if (oushu(n) && eee(n)) {
		return 1;
	} else {
		return 0;
	}
}

int bbb(int n) {
	if (oushu(n) || eee(n)) {
		return 1;
	} else {
		return 0;
	}
}

int ccc(int n) {
	if (!(oushu(n) && eee(n)) && (oushu(n) || eee(n))) {
		return 1;
	} else {
		return 0;
	}
}

int ddd(int n) {
	if (!(oushu(n) || eee(n))) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int a;
	cin >> a;
	cout << aaa(a) << " " << bbb(a) << " " << ccc(a) << " " << ddd(a);
	return 0;
}
