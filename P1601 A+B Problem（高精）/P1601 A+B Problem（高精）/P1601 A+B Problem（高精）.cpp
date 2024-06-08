#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> a, b, c;
	int t = 0;
	string input;
	getline(cin, input);
	for (int i = input.length() - 1; i >= 0; i--) {
		a.push_back(input[i] - '0');
	}
	getline(cin, input);
	for (int i = input.length() - 1; i >= 0; i--) {
		b.push_back(input[i] - '0');
	}
	int maxSize = max(a.size(), b.size());
	for (int i = 0; i < maxSize || t; i++) {
		if (i < a.size()) {
			t += a[i];
		}
		if (i < b.size()) {
			t += b[i];
		}
		c.push_back(t % 10);
		t /= 10;
	}
	for (int i = c.size() - 1; i >= 0; i--) {
		cout << c[i];
	}
	return 0;
}