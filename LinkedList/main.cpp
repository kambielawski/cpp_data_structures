#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList<int> myList;
  cout << myList.length() << endl;
  myList.addFront(5);
  myList.addFront(5);
  myList.addFront(5);
  myList.addFront(5);
  cout << myList.length() << endl;
  return 0;
}
