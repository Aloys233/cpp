#include<iostream>
#include<cstdlib>
#include<iomanip>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef int Status;

typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;

Status InitList(LinkList& L) {
	L = new LNode;
	L->next = NULL;
	return OK;
}

Status ListInsert(LinkList& L, int i, int e) {
	LNode* p = L;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (!p || j > i - 1) {
		return ERROR;
	}
	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status ListOutput(LinkList L) {
	LinkList p = L->next;
	if (!p) {
		return ERROR;
	}
	while (p) {
		cout << p->data;
		if (p->next) {
			cout << " ";
		}
		p = p->next;
	}
	cout << endl;
	return OK;
}

void InsertMerge(LinkList& L, int e) {
	int j = 0;
	LNode* current = L->next;
	bool a = false;
	while (current != NULL) {
		if (current->data > e) {
			ListInsert(L, j + 1, e);
			a = true;
			break;
		}
		else if (current->data == e) {
			a = true;
			break;
		}
		current = current->next;
		j++;
	}
	if (!a) {
		ListInsert(L, j + 1, e);
	}
}

int main() {
	LinkList L;
	InitList(L);
	int n,a;
	cin>> n;
	for (int i = 0; i < n; i++) {
		int e;
		cin >> e;
		ListInsert(L, i + 1, e);
	}
	cin >> a;
	InsertMerge(L, a);
	ListOutput(L);
	return 0;
}