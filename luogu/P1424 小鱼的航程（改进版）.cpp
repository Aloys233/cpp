#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, n;
	cin >> x >> n;
	int week = n / 7;
	int elseweek = n % 7;
	int weekend = week * 2;
	for (int i = 1; i <= elseweek; i++) {
		if ((x + i - 1) % 7 == 6 || (x + i - 1) % 7 == 0) {
			weekend++;
		}
	}
	int work = n - weekend;
	cout << work * 250 << endl;
	return 0;
}
