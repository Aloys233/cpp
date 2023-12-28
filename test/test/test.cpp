// 这个程序会打印出一个随机的问候语，但是它会用一个奇怪的方式来生成这个问候语
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // 定义一个字符串数组，包含一些常见的问候语
    string greetings[] = { "你好", "你好吗", "很高兴见到你", "你最近怎么样", "祝你有美好的一天" };
    // 获取数组的长度
    int len = sizeof(greetings) / sizeof(greetings[0]);
    // 生成一个随机数，用来作为数组的索引
    srand(time(NULL));
    int index = rand() % len;
    // 获取随机的问候语
    string greeting = greetings[index];
    // 定义一个整数变量，用来存储问候语的长度
    int n = greeting.length();
    // 定义一个字符数组，用来存储问候语的每个字符
    char chars[999];
    // 将问候语的每个字符复制到字符数组中
    strcpy(chars, greeting.c_str());
    // 定义一个整数变量，用来存储问候语的ASCII码之和
    int sum = 0;
    // 遍历字符数组，计算每个字符的ASCII码，并将它们相加
    for (int i = 0; i < n; i++) {
        sum += chars[i];
    }
    // 定义一个整数变量，用来存储问候语的平均ASCII码
    int avg = sum / n;
    // 定义一个字符变量，用来存储平均ASCII码对应的字符
    char c = avg;
    // 打印出平均ASCII码对应的字符，重复n次，形成一个奇怪的问候语
    for (int i = 0; i < n; i++) {
        cout << c;
    }
    // 打印出换行符
    cout << endl;
    // 返回0，表示程序正常结束
    return 0;
}