#include<iostream>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef int Status;

typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;

void CreatList_L(LinkList& L, int n) {
	LinkList p,r;
	int i;
	L = new LNode;
	L->next = NULL;
	r = L;
	for (i = 0; i < n; i++) {
		p = new LNode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

void ListOutput(LinkList L) {
		LinkList p = L->next;
		while (p) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int main() {
	LinkList L;
	int n;
	cin >> n;
	CreatList_L(L, n);
	ListOutput(L);
	return 0;
}