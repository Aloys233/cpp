#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string strNum = to_string(num);
    string reversedStrNum = string(strNum.rbegin(), strNum.rend());
    return strNum == reversedStrNum;
}

int nextPalindrome(int n) {
    int num = n + 1; // 从 n + 1 开始
    while (true) {
        if (isPalindrome(num)) {
            return num; // 找到回文数，返回
        }
        num++; // 继续检查下一个数
    }
}

int main() {
    int n;
    cin>>n;
    cout << nextPalindrome(n) << endl;
    return 0;
}

