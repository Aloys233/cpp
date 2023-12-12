#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[999];
	int count1 = 0;//left
	int count2 = 0;//right
	cin >> s;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count1++;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            count2++;
        }
    }
	cout << count1+count2;
	return 0;
}