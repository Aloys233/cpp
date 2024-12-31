#include <bits/stdc++.h>

using namespace std;

struct Item{
    double weight;
    double value;
    double price;
};

bool compare(Item a,Item b){
    return a.price > b.price;
}

int main()
{
    int N, T;
    cin >> N >> T;
    Item items[100];
    for (int i = 0; i < N; i++)
    {
        cin >> items[i].weight >> items[i].value;
        items[i].price = items[i].value / items[i].weight;
    }
    sort(items, items + N, compare);
    double remain = T;
    double sum = 0;
    for (int i = 0; i < N; i++){
        if(remain<=0){
            break;
        }
        if(remain>=items[i].weight){
            sum += items[i].value;
            remain -= items[i].weight;
        }else{
            sum += remain * items[i].price;
            remain = 0;
        }
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}