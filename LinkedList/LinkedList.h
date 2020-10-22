#include "ListNode.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H


template <typename ItemType>
class LinkedList {
private:
ListNode<ItemType>* m_tail;
ListNode<ItemType>* m_head;

public:
LinkedList();
~LinkedList();
bool isEmpty();
void add(ItemType item);

};

template <typename ItemType>
LinkedList<ItemType>::LinkedList() {
  m_tail = nullptr;
  m_head = nullptr;
}

template <typename ItemType>
LinkedList<ItemType>::~LinkedList() {
  while (this->isEmpty()) {
    
  }
}

template <typename ItemType>
bool LinkedList<ItemType>::isEmpty() {
  if (m_tail == nullptr) {
    return true;
  } else {
    return false;
  }
}

template <typename ItemType>
void LinkedList<ItemType>::add(ItemType item) {
  if (this->isEmpty()) {

  } else {

  }
}


#endif
