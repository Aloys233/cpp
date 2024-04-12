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

Status ListDelete(LinkList& L, int i) {
	LNode* P = L;
	int j = 0;
	while (P->next && j < i - 1) {
		P = P->next;
		j++;
	}
	if (!(P->next) || j > i - 1) {
		return ERROR;
	}
	LNode* q = P->next;
	P->next = q->next;
	delete q;
	return OK;
}

Status ListOutput(LinkList L) {
	LinkList p = L->next;
	if (!p) {
		return ERROR;
	}
	while (p) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
	return OK;
}

int main() {
	int n, m, op, k, d;
	cin >> n;//输入链表长度
	LinkList L;
	InitList(L);
	for (int i = 0; i < n; i++) {
		cin >> m;
		ListInsert(L, i + 1, m);
	}
	cin >> m;//输入操作次数
	for (int i = 0; i < m; i++) {
		cin >> op;
		if (op == 0) {
			cin >> k >> d;
			ListInsert(L, k + 1, d);
		}
		else if (op == 1) {
			cin >> k;
			if (k != 0) {
				ListDelete(L, k);
			}
		}
	}
	ListOutput(L);
	return 0;
}