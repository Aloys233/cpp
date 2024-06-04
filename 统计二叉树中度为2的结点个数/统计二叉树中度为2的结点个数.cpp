#include <iostream>
using namespace std;

typedef struct BiNode
{
  char data;
  struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

BiTree CreateBiTree(char *preOrder, int *index)
{
  char ch = preOrder[*index];
  (*index)++;
  if (ch == '*' || ch == '\0')
  {
    return NULL;
  }
  else
  {
    BiTree node = (BiTree)malloc(sizeof(BiNode));
    node->data = ch;
    node->lchild = CreateBiTree(preOrder, index);
    node->rchild = CreateBiTree(preOrder, index);
    return node;
  }
}

int CountDegreeTwoNodes(BiTree T)
{
  if (T == NULL)
  {
    return 0;
  }
  int count = 0;
  if (T->lchild != NULL && T->rchild != NULL)
  {
    count = 1;
  }
  return count + CountDegreeTwoNodes(T->lchild) + CountDegreeTwoNodes(T->rchild);
}

int main()
{
  char preOrder[81];
  while (cin >> preOrder)
  {
    int index = 0;
    BiTree tree = CreateBiTree(preOrder, &index);
    int degreeTwoCount = CountDegreeTwoNodes(tree);
    cout << degreeTwoCount << endl;
  }
  return 0;
}