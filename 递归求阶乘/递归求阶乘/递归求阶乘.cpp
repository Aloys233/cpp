#include<iostream>
using namespace std;

int f(int n) {
	int res;
	if (n == 1) {
		res = 1;
	}
	else {
		res = f(n - 1) * n;
	}
	return res;
}

int main() {
	cout << f(5);
	return 0;
}