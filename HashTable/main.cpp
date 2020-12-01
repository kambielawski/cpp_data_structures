#include <iostream>
#include "HashTableSC.h"
using namespace std;

int main (int argc, char **argv) {
  HashTable<char> ht;

  bool gotAdded = ht.add(69, 'a');

  cout << "shiz got added: " << gotAdded << endl;
  cout << "shiz is contained: " << ht.contains(69, 'a') << endl;

  bool gotRemoved = ht.remove(69, 'a');

  cout << "shiz still contains?: " << ht.contains(69, 'a') << endl;
  cout << "shiz is removed: " << gotRemoved << endl;

  return 0;
}
