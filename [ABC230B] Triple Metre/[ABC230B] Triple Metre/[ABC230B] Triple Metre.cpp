#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	string s = "oxxoxxoxxoxxoxx";
	if (s.find(a)!=string::npos) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}