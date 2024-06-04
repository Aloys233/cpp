#include <iostream>

using namespace std;

const int N = 1e7;
int a[N];
int t;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (m--) {
        cin >> t;
        int l = 0, r = n - 1;
        while (l < r) {
            int mid;
            mid = (l + r) >> 1;
            if (a[mid] >= t)r = mid;// 如果中间值比t大，则向左寻找
            else l = mid + 1;// 否则向右寻找
        }
        if (a[l] == t)cout << l << " ";// 能找到，输出其在序列中对应的位置
        else cout << -1 << " ";// 找不到，就输出-1
    }
    return 0;
}
