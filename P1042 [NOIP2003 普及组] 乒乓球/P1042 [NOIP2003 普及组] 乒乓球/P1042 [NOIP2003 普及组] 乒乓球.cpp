#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string input;
    char ch;
    while (cin >> ch) {
        input += ch;
        if (ch == 'E') {
            break;
        }
    }
    int results11[2500][2] = { 0 };
    int results21[2500][2] = { 0 };
    int count11 = 0, count21 = 0;
    int w11 = 0, l11 = 0, w21 = 0, l21 = 0;
    for (char ch : input) {
        if (ch == 'E') {
            break;
        }
        if (ch == 'W') {
            w11++;
            w21++;
        }
        else if (ch == 'L') {
            l11++;
            l21++;
        }
        if ((w11 >= 11 || l11 >= 11) && abs(w11 - l11) >= 2) {
            results11[count11][0] = w11;
            results11[count11][1] = l11;
            count11++;
            w11 = l11 = 0;
        }
        if ((w21 >= 21 || l21 >= 21) && abs(w21 - l21) >= 2) {
            results21[count21][0] = w21;
            results21[count21][1] = l21;
            count21++;
            w21 = l21 = 0;
        }
    }
    if (w11 > 0 || l11 > 0) {
        results11[count11][0] = w11;
        results11[count11][1] = l11;
        count11++;
    }
    if (w21 > 0 || l21 > 0) {
        results21[count21][0] = w21;
        results21[count21][1] = l21;
        count21++;
    }
    for (int i = 0; i < count11; i++) {
        cout << results11[i][0] << ":" << results11[i][1] << endl;
    }
        cout << endl;
    for (int i = 0; i < count21; i++) {
        cout << results21[i][0] << ":" << results21[i][1];
    }
    return 0;
}
