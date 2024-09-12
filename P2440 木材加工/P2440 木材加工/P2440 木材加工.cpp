#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;//数量，小段长度
	cin >> n >> k;
    vector<int> logs(n);
    int maxLen = 0;
    for (int i = 0; i < n; ++i) {
        cin >> logs[i];
        maxLen = max(maxLen, logs[i]);  // 找到木头的最大长度
    }
    int left = 1, right = maxLen;
    int ans = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;

	return 0;
}