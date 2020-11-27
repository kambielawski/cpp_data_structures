#ifndef HEAP_H
#define HEAP_H

#include "HeapInterface.h"

template <typename ItemType>
struct HeapNode {
  int key;
  ItemType value;
  HeapNode<ItemType> *leftChild;
  HeapNode<ItemType> *rightChild;

  HeapNode(int key, ItemType value) : key(key), value(value) {}
};

template <typename ItemType>
class Heap : public HeapInterface<ItemType> {
private:
HeapNode<ItemType> *m_root;

public:
Heap();
~Heap();
void insert(int key, ItemType value);
ItemType extractMin();
ItemType getMin() const;

};

// constructor
template <typename ItemType>
Heap<ItemType>::Heap() : m_root(nullptr) {}

// destructor
template <typename ItemType>
Heap<ItemType>::~Heap() {}

template <typename ItemType>
void Heap<ItemType>::insert(int key, ItemType value) {
  HeapNode<ItemType> newItem(key, value);
  if (m_root == nullptr) {
    m_root = &newItem;
  } else {

  }
}

template <typename ItemType>
ItemType Heap<ItemType>::extractMin() {
  return m_root->value;
}

template <typename ItemType>
ItemType Heap<ItemType>::getMin() const {
  return m_root->value;
}



#endif
