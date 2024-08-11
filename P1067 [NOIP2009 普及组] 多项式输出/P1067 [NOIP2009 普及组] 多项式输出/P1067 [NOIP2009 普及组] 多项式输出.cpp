#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int str[101];
    for (int i = 0; i <= n; i++) {
        cin >> str[i];
    }
    string result = "";
    bool isFirstTerm = true;
    for (int i = 0; i <= n; ++i) {
        int coeff = str[i];
        int power = n - i;
        if (coeff == 0) {
            continue;
        }
        if (isFirstTerm) {
            if (coeff < 0) {
                result += "-";
            }
            isFirstTerm = false;
        }
        else {
            if (coeff > 0) {
                result += "+";
            }
            else {
                result += "-";
            }
        }
        if (abs(coeff) != 1 || power == 0) {
            result += to_string(abs(coeff));
        }
        if (power > 0) {
            result += "x";
            if (power > 1) {
                result += "^" + to_string(power);
            }
        }
    }
    cout << result << endl;
    return 0;
}