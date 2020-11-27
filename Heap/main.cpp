#include <iostream>
#include "Heap.h"
using namespace std;

int main (int argc, char *argv[]) {
  Heap<char> h;
  h.insert(5, 'a');
  cout << h.getMin() << endl;

  return 0;
}
