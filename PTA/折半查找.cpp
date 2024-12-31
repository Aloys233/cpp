#include <bits/stdc++.h>

using namespace std;

int halfFoldSearch(int arr[],int n,int m)
{
    int left = 0;
    int right = n - 1;
    while(left<=right)
    {
        int mid = (left + right) / 2;
        if(arr[mid]==m)
        {
            return mid + 1;
        }
        if(arr[mid]<m)
        {
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;//个数
    cin >> n;
    int m;//要查找的数
    int arr[1086];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int result = halfFoldSearch(arr, n, m);
    if(result==-1)
    {
        cout << "No data!";
    }else{
        cout << "It's position is " << result << "!";
    }
    return 0;
}
