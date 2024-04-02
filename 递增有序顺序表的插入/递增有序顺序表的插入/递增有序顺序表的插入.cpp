#include <iostream>
#include <cstdlib>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef int Status;

typedef struct {
	int* data;
	int length;
}SqList;

static Status InitList(SqList& L) {
	L.data = new int[MAXSIZE];
	if (!L.data) {
		exit(OVERFLOW);
	}
	L.length = 0;
	return OK;
}

static Status LocateList(SqList L, int e) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == e) {
			return i + 1;
		}
	}
	return ERROR;
}

static Status ListInsert(SqList& L, int i, int e) {
	if (i < 1 || i > L.length + 1) {
		return ERROR;
	}
	if (L.length >= MAXSIZE) {
		return ERROR;
	}
	for (int j = L.length - 1; j >= i - 1; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return OK;
}

static void ListPrint(SqList L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i] << ",";
	}
	cout << endl;
}

static void ListSort(SqList& L) {
	int temp;
	for (int i = 0; i < L.length - 1; i++) {
		for (int j = 0; j < L.length - i - 1; j++) {
			if (L.data[j] > L.data[j + 1]) {
				temp = L.data[j];
				L.data[j] = L.data[j + 1];
				L.data[j + 1] = temp;
			}
		}
	}
}

int main() {
	int a, b, e;
	cin >> a;//长度
	SqList List1;
	InitList(List1);
	for (int i = 0; i < a; i++) {
		cin >> e;
		ListInsert(List1, i + 1, e);
	}
	cin >> b;
	ListInsert(List1, List1.length + 1, b);
	ListSort(List1);
	ListPrint(List1);
	return 0;
}