#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, b;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << (b = unique(a, a + n) - a) << endl;
	for (int i = 0; i < b; i++) {
		cout << a[i] << " ";
	}
	delete []a;
	return 0;
}