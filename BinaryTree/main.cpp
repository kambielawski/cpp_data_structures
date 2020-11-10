#include <iostream>
#include "BSTStruct.h"

using namespace std;

int main(int argc, char *argv[]) {
  BinarySearchTree<char> bst;
  bst.insert(6, 'a');
  bst.insert(2, 'b');
  bst.insert(7, 'c');

  BinaryTreeNode<char> *root = bst.getRoot();
  
  cout << root->key << endl;
  cout << root->leftChild->key << endl;
  cout << root->rightChild->key << endl;
  
  return 0;
}

