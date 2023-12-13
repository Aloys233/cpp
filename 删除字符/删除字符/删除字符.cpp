#include<iostream>

static void delchar(char* s, char ch) {
    char* p = s;
    while (*p != '\0') {
        if (*p == ch) {
            p++;
        }
        else {
            *s = *p;
            s++;
            p++;
        }
    }
    *s = '\0';
}
int main() {
	char a;
    std::cin >> a;
    char* str = new char[1000];
    std::cin.ignore();
	std::cin.getline(str,999);
	delchar(str,a);
	puts(str);
	delete[]str;
	return 0;
}