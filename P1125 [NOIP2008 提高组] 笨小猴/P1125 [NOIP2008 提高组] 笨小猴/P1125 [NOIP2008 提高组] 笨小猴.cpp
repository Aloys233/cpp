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

int MaxTimes(string n) {
    int count[26] = {0};
    for (int i = 0; i < n.size(); i++) {
        count[n[i] - '`']++;
    }
    int max_count = 0;
    char max_char = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_char = i + '`';
        }
    }
    return max_count;
}

int MinTimes(string n) {
    int count[26] = { 0 };
    for (int i = 0; i < n.size(); i++) {
        count[n[i] - '`']++;
    }
    int min_count = 10e9;
    char min_char = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0 && count[i] < min_count) {
            min_count = count[i];
            min_char = i + '`';
        }
    }
    return min_count;
}

int main() {
    string a;
    cin >> a;
    if (IsPrime(MaxTimes(a) - MinTimes(a))){
        cout << "Lucky Word" << endl << MaxTimes(a) - MinTimes(a);
    }
    else {
        cout << "No Answer" << endl << "0";
    }
    return 0;
}