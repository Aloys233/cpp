#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string passwd;
	cin >> passwd;
	for (int i = 0; i < passwd.size(); i++) {
		int temp = passwd[i] + (n % 26);
		if (temp > 'z') {
			temp = temp - '{' + 'a';
		}
		passwd[i] = temp;
	}
	cout << passwd;
	return 0;
}