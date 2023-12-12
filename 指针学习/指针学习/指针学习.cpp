#include<iostream>
using namespace std;
int main()
{
	int a=20;
	int *ip;
	ip = &a;
	cout << ip << endl << *ip;
	return 0;
}