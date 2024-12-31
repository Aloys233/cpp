#include <bits/stdc++.h>

using namespace std;

struct Person{
    int time;
    int index;
};

bool compare(Person a,Person b){
    return a.time < b.time;
}


int main(){
    int N;
    cin >> N;
    Person a[10000];
    for (int i = 1; i <= N; i++){
        cin >> a[i - 1].time;
        a[i - 1].index = i;
    }
    sort(a, a + N, compare);
    for (int i = 0; i < N;i++){
        cout << a[i].index;
        if(i<N-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    double total_time = 0;
    double tmp = 0;
    for (int i = 0; i < N; i++)
    {
        tmp += a[i].time;
        total_time += tmp;
    }
    cout << fixed << setprecision(2) << (total_time-tmp) / N << endl;
    return 0;
}