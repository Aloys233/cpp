#include <bits/stdc++.h>

using namespace std;

int runnian(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int y, m;
	cin >> y >> m;
	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "31";
			break;
		case 2:
			if (runnian(y)) {
				cout << "29";
			} else {
				cout << "28";
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30";
			break;
		default:
			break;
	}
	return 0;
}
