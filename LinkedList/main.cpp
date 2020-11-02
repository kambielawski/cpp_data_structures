#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList<int> myList;
  cout << myList.length() << endl;
  myList.addFront(5);
  myList.addFront(3);
  myList.addFront(8);
  myList.addFront(1);
  cout << myList.length() << endl;
  cout << myList.find(8) << "\t" << myList.find(2) << endl;
  myList.print();
  myList.printReverseList();
  return 0;
}
