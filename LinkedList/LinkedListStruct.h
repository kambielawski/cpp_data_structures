#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

template <typename ItemType>
struct listNode {
  ItemType item;
  listNode<ItemType> *next;

  listNode() {}
  listNode(ItemType item, listNode<ItemType> *next) : item(item), next(next) {}
};


template <typename ItemType>
class LinkedList {
private:
listNode<ItemType> *m_head;
int m_length;

public:
LinkedList();
~LinkedList();

void insertFront(ItemType item);
void insertBack(ItemType item);
void printList() const;

};


template <typename ItemType>
LinkedList<ItemType>::LinkedList() {
  m_head = nullptr;
  m_length = 0;
}

template <typename ItemType>
LinkedList<ItemType>::~LinkedList() {
  // delete list recursively
}

template <typename ItemType>
void LinkedList<ItemType>::insertFront(ItemType item) {
  struct listNode<ItemType> *temp = new listNode<ItemType>();
  temp->item = item;
  if (m_head == nullptr) {
    temp->next = nullptr;
  } else {
    temp->next = m_head;
  }
  m_head = temp;
  m_length++;
}

template <typename ItemType>
void LinkedList<ItemType>::insertBack(ItemType item) {
  struct listNode<ItemType> *temp;
  if (m_head == nullptr) {
    temp = new listNode<ItemType>(item, nullptr);
    m_head = temp;
  } else {
    temp = m_head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = new listNode<ItemType>(item, nullptr);
  }
  temp = nullptr;
  m_length++;
}

template <typename ItemType>
void LinkedList<ItemType>::printList() const {
  struct listNode<ItemType> *temp = m_head;
  for (int i = 0; i < m_length; i++) {
    std::cout << temp->item << std::endl;    
    temp = temp->next;
  }
}

#endif
