#include<bits/stdc++.h>

using namespace std;

void aa(int n,int m,int k,int p){
    if (m - k < 0) {
        cout << "Divide" << endl;
    } else {
        int required = n * (m - k + 1);
        if (p < required) {
            cout << "Together" << endl;
        } else if (p <= n * m - k) {
            cout << "Chance" << endl;
        } else {
            cout << "Divide" << endl;
        }
    }
}

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int n, m, k, p;
        cin >> n >> m >> k >> p;
        aa(n, m, k, p);
    }
    return 0;
}