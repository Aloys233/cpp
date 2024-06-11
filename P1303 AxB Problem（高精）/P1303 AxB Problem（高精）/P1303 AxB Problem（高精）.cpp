#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a1[10086], b1[10086];
    cin >> a1 >> b1;
    int a[10086], b[10086], c[10001]={0}, len;
    int lena = strlen(a1);
    int lenb = strlen(b1);
    for (int i = 1; i <= lena; i++) {
        a[i] = a1[lena - i] - '0';
    }
    for (int i = 1; i <= lenb; i++) {
        b[i] = b1[lenb - i] - '0';
    }
    for (int i = 1; i <= lena; i++) {
        for (int j = 1; j <= lenb; j++) {
            c[i + j - 1] += a[i] * b[j];
        }
    }
    len = lena + lenb;
    for (int i = 0; i < len; i++) {
        if (c[i] > 9) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    while (c[len] == 0 && len > 1) {
        len--;
    }
    for (int i = len; i >= 1; i--) {
        cout << c[i];
    }
    return 0;
}
