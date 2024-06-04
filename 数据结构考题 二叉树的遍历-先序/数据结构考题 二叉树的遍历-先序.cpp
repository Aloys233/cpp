#include <stdio.h>
#include <stdlib.h>

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

void PreOrderTraversal(BiTree T)
{
  if (T)
  {
    printf("%c", T->data);
    PreOrderTraversal(T->lchild);
    PreOrderTraversal(T->rchild);
  }
}

int main()
{
  char preOrder[100];
  scanf("%s", preOrder);

  BiTree tree = CreateBiTree(preOrder);
  PreOrderTraversal(tree);
  printf("\n");

  return 0;
}