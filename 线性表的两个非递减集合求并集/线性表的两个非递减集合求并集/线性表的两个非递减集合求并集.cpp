#include<iostream>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2

using namespace std;

typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;

void CreatList_L(LinkList& L, int n) {
	LinkList p, r;
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
		cout << p->data;
		if (p->next) {
			cout << " ";
		}
		p = p->next;
	}
	cout << endl;
}

void MergeList_L(LinkList& LA, LinkList& LB, LinkList& LC) {
	LNode *pa = LA->next;
	LNode *pb = LB->next;
	LC = LA;
	LNode* pc = LC;
	while (pa && pb) {
		if (pa->data <= pb->data) {
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else {
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	pc->next=pa?pa:pb;
}

int main() {
	LinkList LA,LB,LC;
	int a,b;
	cin >> a;
	CreatList_L(LA, a);
	cin >> b;
	CreatList_L(LB, b);
	ListOutput(LA);
	MergeList_L(LA, LB, LC);
	ListOutput(LB);
	ListOutput(LC);
	return 0;
}