#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> a, b, c; // 定义三个向量a、b、c，分别用于存储输入的两个数和它们的和
	int t = 0; // 用于存储进位
	string input; // 用于存储输入的字符串
	getline(cin, input); // 读取第一个数的字符串形式
	for (int i = input.length() - 1; i >= 0; i--) {
		a.push_back(input[i] - '0'); // 将字符串中的每个字符转换为数字，并存入向量a中
	}
	getline(cin, input); // 读取第二个数的字符串形式
	for (int i = input.length() - 1; i >= 0; i--) {
		b.push_back(input[i] - '0'); // 将字符串中的每个字符转换为数字，并存入向量b中
	}
	int maxSize = max(a.size(), b.size()); // 计算a和b中较长的长度
	for (int i = 0; i < maxSize || t; i++) {
		if (i < a.size()) {
			t += a[i]; // 将a中的每个数字与进位相加
		}
		if (i < b.size()) {
			t += b[i]; // 将b中的每个数字与进位相加
		}
		c.push_back(t % 10); // 将当前位的数字存入向量c中
		t /= 10; // 计算进位
	}
	for (int i = c.size() - 1; i >= 0; i--) {
		cout << c[i]; // 逆序输出向量c中的每个数字
	}
	return 0;
}