#include <iostream>
#include <cmath>  // 使用 pow 函数
using namespace std;

int main() {
    int s[30];  // 定义大小为 30 的数组
    int n = 0;  // 集合元素数量

    // 读取输入的集合元素，直到输入结束
    while (cin >> s[n]) {
        n++;
    }

    long long totalSum = 0;
    long long factor = pow(2, n - 1);  // 每个元素出现的次数为 2^(n-1)

    // 计算每个元素的贡献
    for (int i = 0; i < n; i++) {
        totalSum += s[i] * factor;
    }

    cout << totalSum << endl;  // 输出最终的结果
    return 0;
}
