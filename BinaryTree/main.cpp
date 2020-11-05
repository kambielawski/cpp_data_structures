#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char *argv[]) {
  BinaryTree<int, char> bt;
  bt.insert(20, 'a');
  cout << bt.getRoot()->getKey() << endl;
  cout << bt.getRoot()->getValue() << endl;
  return 0;
}

