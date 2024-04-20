#include <iostream>
#include <string>
#include <cstdlib>
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
	int stacksize;
}SqStack;

Status InitStack(SqStack& S)
{
	S.base = new int[MAXSIZE];
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

bool CheckStr(SqStack& S, string& str) {
	for (char ch : str) {
		if (ch == '(' || ch == '[' || ch == '{') {
			Push(S, ch);
		}
		else if (ch == ')' || ch == ']' || ch == '}') {
			if (S.top == S.base) {
				return false;
			}
			int temp;
			Pop(S, temp);
			if ((ch == ')' && temp != '(') || (ch == ']' && temp != '[') || (ch == '}' && temp != '{')) {
				return false;
			}
		}
	}
	return S.top == S.base;
}

int main() {
	SqStack S;
	InitStack(S);
	string str;
	getline(cin, str);
	if(CheckStr(S, str))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}