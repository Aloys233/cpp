#include<iostream>
#define OK 1
#define ERROR 0
#define OVERFLOW -2

using namespace std;

typedef struct LNode {
	int data;
	struct LNode* next;
}LNode, * LinkList;

void CreatList_L(LinkList& L) {
	LinkList p, r;
	int i;
	L = new LNode;
	L->next = NULL;
	r = L;
	for (i = 0;; i++) {
		p = new LNode;
		cin >> p->data;
		if (p->data == -1) {
			break;
		}
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

void ListOutput(LinkList L) {
	LinkList p = L->next;
	if (!p) {
		cout << "NULL";
		return;
	}
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
	LNode* pa = LA->next;
	LNode* pb = LB->next;
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
	pc->next = pa ? pa : pb;
}

void RemoveRepeat(LinkList &L) {
	LNode* p = L->next, * q, * tmp;
	while (p && p->next) {
		if (p->data == p->next->data) {
			tmp = p->next;
			p->next = tmp->next;
			delete tmp;
		}
		else {
			p = p->next;
		}
	}
}

int main() {
	LinkList LA, LB, LC;
	CreatList_L(LA);
	CreatList_L(LB);
	MergeList_L(LA, LB, LC);
	RemoveRepeat(LC);
	ListOutput(LC);
	return 0;
}