#include<iostream>
using namespace std;
int main() {
	string a;
	bool flag = true;
	cin >> a;
	for (int i = 0; i < a.length() / 2; i++) {
		if (a[i] != a[a.length()-1-i]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}
