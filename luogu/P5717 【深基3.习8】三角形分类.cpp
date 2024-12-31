#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sides[3] = {a, b, c};
	sort(sides, sides + 3);
	a = sides[0];
	b = sides[1];
	c = sides[2];
	if (a + b <= c) {
		cout << "Not triangle" << endl;
		return 0;
	}
	int a2 = a * a, b2 = b * b, c2 = c * c;
	if (a2 + b2 == c2) {
		cout << "Right triangle" << endl;
	} else if (a2 + b2 > c2) {
		cout << "Acute triangle" << endl;
	} else {
		cout << "Obtuse triangle" << endl;
	}
	if (a == b || a == c || b == c) {
		cout << "Isosceles triangle" << endl;
	}
	if (a == b && b == c) {
		cout << "Equilateral triangle" << endl;
	}
	return 0;
}
