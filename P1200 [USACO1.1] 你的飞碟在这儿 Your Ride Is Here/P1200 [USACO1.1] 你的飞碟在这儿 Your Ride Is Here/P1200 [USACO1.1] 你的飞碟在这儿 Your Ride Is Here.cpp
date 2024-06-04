#include<iostream>

using namespace std;

int StringProduct(string n) {
	int sum = 1;
	for (int i = 0; i < n.length(); i++) {
			sum *= n[i] - '@';
	}
	return sum;
}

int main() {
	string a, b;
	int asum, bsum;
	cin >> a;
	asum = StringProduct(a);
	cin >> b;
	bsum = StringProduct(b);
	if (asum % 47 == bsum % 47) {
		cout << "GO";
	}
	else {
		cout << "STAY";
	}
	return 0;
}