#include <bits/stdc++.h>

using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b;
	c = a / pow(b, 2);
	if (c < 18.5) {
		cout << "Underweight";
	} else if (c >= 18.5 && c < 24) {
		cout << "Normal";
	} else if (c >= 24) {
		cout << c << endl << "Overweight";
	}
	return 0;
}
