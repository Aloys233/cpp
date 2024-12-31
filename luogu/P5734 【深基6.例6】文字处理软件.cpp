#include <bits/stdc++.h>

using namespace std;

int main() {
	int q;
	string doc;
	cin >> q;
	cin >> doc;
	while (q--) {
		int op;
		cin >> op;
		if (op == 1) {
			string str;
			cin >> str;
			doc += str;
			cout << doc << endl;
		}
		if (op == 2) {
			int a, b;
			cin >> a >> b;
			doc = doc.substr(a, b);
			cout << doc << endl;
		}
		if (op == 3) {
			int a;
			string str;
			cin >> a >> str;
			doc.insert(a, str);
			cout << doc << endl;
		}
		if (op == 4) {
			string str;
			cin >> str;
			size_t pos = doc.find(str);
			if (pos != string::npos) {
				cout << pos << endl;
			} else {
				cout << "-1" << endl;
			}
		}
	}
	return 0;
}
