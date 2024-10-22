#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string strNum = to_string(num);
    string reversedStrNum = string(strNum.rbegin(), strNum.rend());
    return strNum == reversedStrNum;
}

int nextPalindrome(int n) {
    int num = n + 1; // �� n + 1 ��ʼ
    while (true) {
        if (isPalindrome(num)) {
            return num; // �ҵ�������������
        }
        num++; // ���������һ����
    }
}

int main() {
    int n;
    cin>>n;
    cout << nextPalindrome(n) << endl;
    return 0;
}

