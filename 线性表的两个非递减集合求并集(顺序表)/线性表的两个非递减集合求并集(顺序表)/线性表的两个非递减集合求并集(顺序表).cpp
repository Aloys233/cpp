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
		cout << L.data[i] << " ";
	}
	cout << endl;
}

static void MergeList_Sq(SqList LA, SqList LB, SqList& LC) {
	LC.length=LA.length+LB.length;
	LC.data = new int[LC.length];
	int *pc=LC.data;
	int *pa=LA.data;
	int *pb=LB.data;
	int *pa_last = LA.data + LA.length - 1;
	int *pb_last = LB.data + LB.length - 1;
	while (pa <= pa_last && pb <= pb_last) {
		if (*pa <= *pb) {
			*pc++ = *pa++;
		}
		else {
			*pc++ = *pb++;
		}
	}
	while (pa <= pa_last) {
		*pc++ = *pa++;
	}
	while (pb <= pb_last) {
		*pc++ = *pb++;
	}
}
int main() {
	SqList LA, LB, LC;
	InitList(LA);
	InitList(LB);
	InitList(LC);
	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int e;
		cin >> e;
		ListInsert(LA, i + 1, e);
	}
	cin >> b;
	for (int i = 0; i < b; i++) {
		int e;
		cin >> e;
		ListInsert(LB, i + 1, e);
	}
	MergeList_Sq(LA, LB, LC);
	ListPrint(LA);
	ListPrint(LB);
	ListPrint(LC);
	return 0;
}