#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void reduceFraction(int &a, int &b) {
	int divisor = gcd(a, b);
	a /= divisor;
	b /= divisor;

	// 确保分母为正
	if (b < 0) {
		a = -a;
		b = -b;
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int arr[3] = {a, b, c};
	sort(arr, arr + 3);
	a = arr[0];
	b = arr[1];
	c = arr[2];
	reduceFraction(a, c);
	cout << a << "/" << c;
	return 0;
}
