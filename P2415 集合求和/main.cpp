#include <iostream>
#include <cmath>  // ʹ�� pow ����
using namespace std;

int main() {
    int s[30];  // �����СΪ 30 ������
    int n = 0;  // ����Ԫ������

    // ��ȡ����ļ���Ԫ�أ�ֱ���������
    while (cin >> s[n]) {
        n++;
    }

    long long totalSum = 0;
    long long factor = pow(2, n - 1);  // ÿ��Ԫ�س��ֵĴ���Ϊ 2^(n-1)

    // ����ÿ��Ԫ�صĹ���
    for (int i = 0; i < n; i++) {
        totalSum += s[i] * factor;
    }

    cout << totalSum << endl;  // ������յĽ��
    return 0;
}
