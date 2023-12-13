#include<iostream>

static void transform(char* a) {
	int len = std::cin.gcount();
	for (int i = 0;i<len;i++) {
		int d = 'a' - 'A';
		if (i != 0) {
			if (a[i] >= 'A' && a[i] <= 'Z') {
				a[i] += d;
			}
		}
	}
}
int main() {
	char* str = new char[1000];
	std::cin.getline(str, 999);
	transform(str);
	puts(str);
	delete[]str;
	return 0;
}