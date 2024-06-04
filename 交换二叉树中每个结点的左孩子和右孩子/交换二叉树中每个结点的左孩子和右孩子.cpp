#include <iostream>
#include <string>

using namespace std;

struct BiNode
{
  char data;
  BiNode *lchild, *rchild;
};

BiNode *CreateBiTree(const string &preOrder, int &index)
{
  if (index >= preOrder.length())
  {
    return nullptr;
  }
  char ch = preOrder[index];
  index++;
  if (ch == '#')
  {
    return nullptr;
  }
  else
  {
    BiNode *node = new BiNode();
    node->data = ch;
    node->lchild = CreateBiTree(preOrder, index);
    node->rchild = CreateBiTree(preOrder, index);
    return node;
  }
}

void InOrderTraversal(BiNode *T, string &result)
{
  if (T)
  {
    InOrderTraversal(T->lchild, result);
    result += T->data;
    InOrderTraversal(T->rchild, result);
  }
}

void SwapChildren(BiNode *T)
{
  if (T)
  {
    swap(T->lchild, T->rchild);
    SwapChildren(T->lchild);
    SwapChildren(T->rchild);
  }
}

int main()
{
  string preOrder;
  while (cin >> preOrder)
  {
    int index = 0;
    BiNode *tree = CreateBiTree(preOrder, index);
    string originalInOrder;
    InOrderTraversal(tree, originalInOrder);
    cout << originalInOrder << endl;
    SwapChildren(tree);
    string swappedInOrder;
    InOrderTraversal(tree, swappedInOrder);
    cout << swappedInOrder << endl;
  }
  return 0;
}