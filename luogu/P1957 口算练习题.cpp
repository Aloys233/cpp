#include <bits/stdc++.h>

using namespace std;

int main() {
	int i;
	cin >> i;
	char last = ' ';
	for (int j = 0; j < i; j++) {
		char dd;
		int num1, num2;
		if (cin >> dd && (dd == 'a' || dd == 'b' || dd == 'c')) {
			cin >> num1 >> num2;
			last = dd;
		} else {
			int temp;
			string tmp;
			cin >> temp >> num2;
			tmp = dd + to_string(temp);
			num1 = stoi(tmp);
			dd = last;
		}
		int result;
		string answer;
		if (dd == 'a') {
			result = num1 + num2;
			answer = to_string(num1) + '+' + to_string(num2) + '=' + to_string(result);
		} else if (dd == 'b') {
			result = num1 - num2;
			answer = to_string(num1) + '-' + to_string(num2) + '=' + to_string(result);
		} else if (dd == 'c') {
			result = num1*num2;
			answer = to_string(num1) + '*' + to_string(num2) + '=' + to_string(result);
		}
		cout << answer << endl << answer.length() << endl;
	}
	return 0;
}
