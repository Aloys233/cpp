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

bool CheckPalindrome(SqStack& S, string str){
	int i = 0;
	while (str[i] != '\0'){
		Push(S, str[i]);
		i++;
	}
	i = 0;
	while (str[i] != '\0'){
		int e;
		Pop(S, e);
		if (e != str[i])
			return false;
		i++;
	}
	return true;
}

int main() {
	SqStack S;
	InitStack(S);
	string str;
	getline(cin, str);
	if (CheckPalindrome(S, str))
		cout << str << "是回文。" << endl;
	else
		cout << str << "不是回文。" << endl;
	return 0;
}