#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[100000];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a, a + N);
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	return 0;
}