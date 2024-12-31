#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count1 = 0;
	double sum1 = 0.0;
	int count2 = 0;
	double sum2 = 0.0;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			sum1 += i;
			count1++;
		} else {
			sum2 += i;
			count2++;
		}
	}
	cout << fixed << setprecision(1) << sum1 / count1 << " " << fixed << setprecision(1) << sum2 / count2;
	return 0;
}
