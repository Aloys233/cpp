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
		cout << L.data[i];
		if (i != L.length - 1)
			cout << " ";
	}
	cout << endl;
}

static void RemoveElements(SqList& L, int x, int y) {
	int j = 0;
	for (int i = 0; i < L.length; i++) {
		if (!(L.data[i] >= x && L.data[i] <= y)) {
			L.data[j++] = L.data[i];
		}
	}
	L.length = j;
}

int main() {
	int a, x, y, e;
	cin >> a;//元素个数
	SqList List1;
	InitList(List1);
	for (int i = 0; i < a; i++) {
		cin >> e;
		ListInsert(List1, i + 1, e); 
	}
	cin >> x >> y;
	RemoveElements(List1, x, y);
	ListPrint(List1);
	delete[] List1.data;
	return 0;
}