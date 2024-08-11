#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10086];
    double score = -1;
    for (int i = 0; i < n; i++) {
        double temp = 0;
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
            temp += arr[j];
        }
        sort(arr, arr + m);
        temp = temp - arr[0] - arr[m - 1];
        temp /= (m - 2);
        if (temp > score) {
            score = temp;
        }
    }
    cout << fixed << setprecision(2) << score;
    return 0;
}