#include <iostream>
#include <string>

using namespace std;

int counts[27] = { 0 };
int MaxCounts = 0;

void Times(string n) {
	for (int i = 0; i < n.size(); i++) {
		if (isalpha(n[i]) && isupper(n[i])) {
			counts[n[i] - '@']++;
		}
	}
}

void VerticalPrint() {
	for (int i = 1; i <= 26; i++) {
		MaxCounts = max(MaxCounts, counts[i]);
	}
	for (int line = MaxCounts; line > 0; line--) {
		for (int j = 1; j <= 26; j++) {
			if (counts[j] >= line) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int main() {
	string a, b, c, d;
	getline(cin, a);
	Times(a);
	getline(cin, b);
	Times(b);
	getline(cin, c);
	Times(c);
	getline(cin, d);
	Times(d);
	VerticalPrint();
	for (int i = 0; i < 26; i++) {
		if (i != 25) {
			cout << char('A' + i) << " ";
		}
		else {
			cout << char('A' + i);
		}
	}
	return 0;
}