#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main(int argc, char *argv[]) {
  BinarySearchTree<int, char> bt;
  bt.insert(20, 'a');
  bt.insert(30, 'c');
  bt.insert(25, 'b');
  bt.insert(15, 'd');
  cout << bt.getRoot()->getKey() << endl;
  cout << bt.getRoot()->getValue() << endl;
  cout << bt.getRoot()->getLeftChild()->getValue() << endl;
  cout << bt.getRoot()->getRightChild()->getValue() << endl;
  cout << bt.getRoot()->getRightChild()->getLeftChild()->getValue() << endl;
  return 0;
}

