#include<iostream>
using namespace std;

int f(int n) {
	int res;
	if (n == 1) {
		res = 2;
	}
	else {
		res = f(n - 1) * 2;
	}
	return res;
}

int main() {
	cout << f(6);
	return 0;
}