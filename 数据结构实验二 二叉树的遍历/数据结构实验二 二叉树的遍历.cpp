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

void PreOrderTraversal(BiNode *T, string &result)
{
  if (T)
  {
    result += T->data;
    PreOrderTraversal(T->lchild, result);
    PreOrderTraversal(T->rchild, result);
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

void PostOrderTraversal(BiNode *T, string &result)
{
  if (T)
  {
    PostOrderTraversal(T->lchild, result);
    PostOrderTraversal(T->rchild, result);
    result += T->data;
  }
}

int CalculateDepth(BiNode *T)
{
  if (T == nullptr)
  {
    return 0;
  }
  int leftDepth = CalculateDepth(T->lchild);
  int rightDepth = CalculateDepth(T->rchild);
  return max(leftDepth, rightDepth) + 1;
}

int CountLeafNodes(BiNode *T)
{
  if (T == nullptr)
  {
    return 0;
  }
  if (T->lchild == nullptr && T->rchild == nullptr)
  {
    return 1;
  }
  return CountLeafNodes(T->lchild) + CountLeafNodes(T->rchild);
}

int main()
{
  string preOrder;
  while (cin >> preOrder)
  {
    int index = 0;
    BiNode *tree = CreateBiTree(preOrder, index);
    string preOrderResult, inOrderResult, postOrderResult;
    PreOrderTraversal(tree, preOrderResult);
    InOrderTraversal(tree, inOrderResult);
    PostOrderTraversal(tree, postOrderResult);
    int depth = CalculateDepth(tree);
    int leafCount = CountLeafNodes(tree);
    cout << "PreOrder:" << preOrderResult << endl;
    cout << "InOrder:" << inOrderResult << endl;
    cout << "PostOrder:" << postOrderResult << endl;
    cout << "Depth:" << depth << endl;
    cout << "Leaf:" << leafCount << endl;
  }
  return 0;
}