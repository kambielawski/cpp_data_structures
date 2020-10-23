#include "ListNode.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H


template <typename ItemType>
class LinkedList {
private:
ListNode<ItemType>* m_tail;
ListNode<ItemType>* m_head;
int m_length;

public:
LinkedList();
~LinkedList();
bool isEmpty();
void addFront(ItemType item);
int length();
ItemType getItemAtIndex(int index);

};


template <typename ItemType>
LinkedList<ItemType>::LinkedList() {
  m_tail = nullptr;
  m_head = nullptr;
  m_length = 0;
}

template <typename ItemType>
LinkedList<ItemType>::~LinkedList() {
  while (this->isEmpty()) {
    
  }
}

template <typename ItemType>
ItemType LinkedList<ItemType>::getItemAtIndex(int index){
  int i = 0;
  if (index > length - 1) {
    throw runtime_error("List index out of range");
  }
  while (i < m_length && i < index) {
    
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
int LinkedList<ItemType>::length() {
  return m_length;
}

template <typename ItemType>
void LinkedList<ItemType>::addFront(ItemType item) {
  m_length++;
  if (this->isEmpty()) {
    m_head = new ListNode<ItemType>(item, m_head);
    m_tail = m_head;
  } else {
    m_head = new ListNode<ItemType>(item, m_head);
  }
}


#endif
