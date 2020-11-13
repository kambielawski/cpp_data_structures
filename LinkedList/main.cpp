#include <iostream>
#include <string>
#include "LinkedListStruct.h"
using namespace std;

int main() {
  LinkedList<int> fart;
  fart.insertFront(23);
  fart.insertFront(24);
  fart.insertFront(48); 
  fart.insertBack(69);
  fart.insertFront(42);
  fart.removeAtIndex(2);
  fart.printList();
  return 0;
}
