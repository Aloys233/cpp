#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* a = new int[m];
	for (int i = 0; i < m; i++) {
		int e;
		cin >> e;
		if (e <= n) {
			a[i] = e;
		}
	}
	sort(a, a + m);
	for (int i = 0; i < m; i++) {
		cout << a[i] << " ";
	}
	return 0;
}