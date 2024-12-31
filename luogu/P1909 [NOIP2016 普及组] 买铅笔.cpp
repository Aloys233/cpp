#include <bits/stdc++.h>

using namespace std;

int getMoney(int n, int a, int b) {
	return (int)ceil((double)n / a) * b;
}

int main() {
	int n, a, b;
	int min1 = INT_MAX;
	int sum = 0;
	cin >> n; //铅笔数量
	for (int i = 0; i < 3; i++) {
		sum = 0;
		cin >> a >> b; //数量，价格
		sum = getMoney(n, a, b);
		if (sum < min1) {
			min1 = sum;
		}
	}
	cout << min1;
	return 0;
}
