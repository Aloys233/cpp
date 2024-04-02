#include<iostream>
#include<cstdlib>
#include<iomanip>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
using namespace std;

typedef int Status;

typedef struct {
	string id;
	string title;
	double price;
}Book;

typedef struct {
	Book* data;
	int length;
}SqList;


static Status InitList(SqList& L) {
	L.data = new Book[MAXSIZE];
	if (!L.data) {
		exit(OVERFLOW);
	}
	L.length = 0;
	return OK;
}

static Status ListInsert(SqList& L, int i, Book e) {
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
		cout << L.data[i].id << " " << L.data[i].title << " " << fixed << setprecision(2) << L.data[i].price << endl;
	}
}

int main() {
	SqList BookList;
	InitList(BookList);
	string id, title;
	double price;
	while (cin >> id && id != "0") {
		cin >> title >> price;
		Book newBook = { id, title, price };
		if (ListInsert(BookList, BookList.length + 1, newBook) != OK) {
			return ERROR;
		}
	}
	cout << BookList.length << endl;
	ListPrint(BookList);
	return 0;
}