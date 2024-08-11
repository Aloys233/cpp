#include <iostream>

using namespace std;

int IsPrime(int num) {
    if (num < 2) {
        return 0; //不是素数
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; //不是素数
        }
    }
    return 1; //是素数
}

int main() {
    int N;
    cin >> N;
    for (int i = 4; i <= N; i+=2) {
        cout << i << '=';
        for (int j = 2; j <= i / 2; j++) {
            if (IsPrime(j) && IsPrime(i - j)) {
                cout << j << "+" << i - j << endl;
                break;
            }
        }
    }
	return 0;
}