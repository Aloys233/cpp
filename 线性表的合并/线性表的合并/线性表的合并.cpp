#include <iostream>
#include <cstdlib>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef int Status;

typedef struct {
	int *data;
	int length;
}SqList;

static Status InitList(SqList &L) {
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

static Status ListInsert(SqList &L, int i, int e) {
	if (i < 1 || i > L.length + 1) {
		return ERROR;
	}
	if (L.length >= MAXSIZE) {
		return ERROR;
	}
	for (int j = L.length-1; j >= i-1; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return OK;
}

static void ListPrint(SqList L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i] << " ";
	}
	cout << endl;
}

static void MergeList(SqList& Q, SqList& W) {
	for (int i = 0; i < W.length; i++) {
		if (LocateList(Q, W.data[i]) == ERROR) {
			ListInsert(Q, Q.length + 1, W.data[i]);
		}
	}
}

int main(){
	int a,b,i,e;
	SqList ListA, ListB;
	InitList(ListA);
	InitList(ListB);
	cin >> a;//集合A的元素个数
	for (i = 0; i < a; i++) {
		cin >> e;
		ListInsert(ListA, i + 1, e);
	}
	cin >> b;//集合B的元素个数
	for (i = 0; i < b; i++) {
		cin >> e;
		ListInsert(ListB, i + 1, e);
	}
	MergeList(ListA, ListB);
	ListPrint(ListA);
	return 0;
}