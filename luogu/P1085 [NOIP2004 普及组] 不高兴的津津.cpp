#include <bits/stdc++.h>

using namespace std;

int main() {
	int tmp1, tmp2, sum;
	int max = 0;
	int n = 0;
	for (int i = 1; i <= 7; i++) {
		cin >> tmp1 >> tmp2;
		sum = tmp1 + tmp2;
		if (sum > 8) {
			int value = sum - 8;
			if (value > max) {
				max = value;
				n = i;
			}
		}
	}
	if (n == 0) {
		cout << 0;
	} else {
		cout << n;
	}
	return 0;
}
