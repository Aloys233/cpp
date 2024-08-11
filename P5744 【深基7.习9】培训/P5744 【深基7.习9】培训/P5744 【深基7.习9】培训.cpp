#include <iostream>

using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int upper(int n) {
	int aa;
	if (n < 600) {
		aa = n * 1.2;
		if (aa < 600) {
			return aa;
		}
		else if (aa >= 600) {
			return 600;
		}
	}
	else if (n == 600) {
		return n;
	}
}

int main() {
	int n;
	cin >> n;
	Student* students=new Student[n];
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].age >> students[i].score;
	}
	for (int i = 0; i < n; i++) {
		cout << students[i].name << " " << students[i].age + 1 << " " << upper(students[i].score) << endl;
	}
	return 0;
}