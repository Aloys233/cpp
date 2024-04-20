#include<iostream>
#include<cstdlib>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef int Status;

typedef struct
{
    int* base;
    int* top;
}SqStack;

Status InitStack(SqStack& S)
{
	S.base =new int[MAXSIZE];
	if (!S.base)
		exit(OVERFLOW);
	S.top = S.base;
	return OK;
}

Status Push(SqStack& S, int e)
{
	if (S.top - S.base == MAXSIZE)
		return ERROR;
	*S.top++ = e;
	return OK;
}

Status Pop(SqStack& S, int& e)
{
	if (S.top == S.base)
		return ERROR;
	e = *--S.top;
	return OK;
}

void Convert(SqStack& S, int n) {
	int m;
	while (n != 0) {
		m = n % 2;
		Push(S, m);
		n /= 2;
	}
}
int main() {
	SqStack S;
	InitStack(S);
	int n;//十进制
	cin >> n;
	Convert(S, n);
	while (S.top != S.base) {
		int e;
		Pop(S, e);
		cout << e;
	}
	return 0;
}