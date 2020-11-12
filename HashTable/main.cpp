#include "ArrayDictionary.h"

void changeLetters(char& prev) {
  if (prev > 'c') {
    prev = 'b';
  } else {
    prev = 'z';
  }
}

int main (int argc, char **argv) {
  ArrayDictionary<int, char> adict;

  adict.add(4, 'a');
  adict.add(7, 'b');
  adict.add(23, 'd');
  adict.add(1, 'j');

  adict.traverse(changeLetters);
  adict.printSequential();

  return 0;
}
