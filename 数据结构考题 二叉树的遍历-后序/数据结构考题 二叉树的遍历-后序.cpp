#include <iostream>

using namespace std;

typedef struct BiNode
{
  char data;
  struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

int index = 0;

BiTree CreateBiTree(char *preOrder)
{
  char ch = preOrder[index++];
  if (ch == '#')
  {
    return NULL;
  }
  else
  {
    BiTree node = (BiTree)malloc(sizeof(BiNode));
    node->data = ch;
    node->lchild = CreateBiTree(preOrder);
    node->rchild = CreateBiTree(preOrder);
    return node;
  }
}

void InOrderTraversal(BiTree T)
{
  if (T)
  {
    InOrderTraversal(T->lchild);
    InOrderTraversal(T->rchild);
    cout << T->data;
  }
}

int main()
{
  char preOrder[100];
  cin >> preOrder;
  BiTree tree = CreateBiTree(preOrder);
  InOrderTraversal(tree);
  return 0;
}