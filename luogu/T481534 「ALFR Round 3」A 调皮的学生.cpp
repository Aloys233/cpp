#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int x[10086];
    for (int i = 0; i < a; ++i) {
        cin >> x[i];
    }
    int b;
    cin >> b;
    int y[10086];
    for (int i = 0; i < b; ++i) {
        cin >> y[i];
    }
    int c;
    cin >> c;
    int z[10086];
    for (int i = 0; i < c; ++i) {
        cin >> z[i];
    }
    int count[10086] = {0};
    for (int i = 0; i < a; ++i) {
        count[x[i]]++;
    }
    for (int i = 0; i < b; ++i) {
        count[y[i]]++;
    }
    for (int i = 0; i < c; ++i) {
        count[z[i]]++;
    }

    int stu = 0;
    for (int i = 1; i <= n; ++i) {
        if (count[i] != 1) {
            stu++;
        }
    }

    cout << stu << endl;

    return 0;
}
