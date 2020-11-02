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
  cout << myList.getItemAtIndex(0) << endl;
  cout << myList.getItemAtIndex(1) << endl;
  cout << myList.getItemAtIndex(2) << endl;
  cout << myList.getItemAtIndex(3) << endl;
  return 0;
}
