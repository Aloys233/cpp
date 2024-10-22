#include <iostream>
#include <cstring>

using namespace std;

int strcmp(char* p1, char* p2) {
    while (*p1 && *p2) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return *p1 - *p2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        char s1[11], s2[11];
        cin >> s1 >> s2;
        cout << strcmp(s1, s2) << endl;
    }
    return 0;
}
