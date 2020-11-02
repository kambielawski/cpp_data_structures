#include "ListNode.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdexcept>
#include <iostream>

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
bool find(ItemType item);
void print();
void printReverseList();
void printReverseList(ListNode<ItemType> *listItem);
void deleteItem(ItemType item);
void deleteItemAtIndex(int index);

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
bool LinkedList<ItemType>::find(ItemType item) {
  ListNode<ItemType> *temp = m_head;
  for (int i = 0; i < m_length; i++) {
    if (temp->getValue() == item) {
      temp = nullptr;
      return true;
    }
    temp = temp->getNext();
  }
  temp = nullptr;
  return false;
}

template <typename ItemType>
void LinkedList<ItemType>::print() {
  ListNode<ItemType> *temp = m_head;
  std::cout << "List: ";
  for (int i = 0; i < m_length; i++) {
    std::cout << temp->getValue() << " ";
    temp = temp->getNext();
  }
  std::cout << "\n";
  temp = nullptr;
}

template <typename ItemType>
void LinkedList<ItemType>::printReverseList() {
  std::cout << "Reversed list:";
  if (m_head != nullptr)
    this->printReverseList(m_head); 
  std::cout << "\n";
}

template <typename ItemType>
void LinkedList<ItemType>::printReverseList(ListNode<ItemType> *listItem) {
  if (listItem->getNext() != nullptr)
    printReverseList(listItem->getNext());
  std::cout << " " << listItem->getValue();
}

template <typename ItemType>
void LinkedList<ItemType>::deleteItem(ItemType item) {
  ListNode<ItemType> *temp = m_head;
  ListNode<ItemType> *lastPrecursor = nullptr;
  if (m_head != nullptr) {
    while (temp != nullptr) {
      if (temp->getValue() == item) {
        lastPrecursor = temp;
      }
      temp = temp->getNext();
    }
  }
}

template <typename ItemType>
void LinkedList<ItemType>::deleteItemAtIndex(int index){
  if (index < 0 || index > m_length - 1)
    throw std::runtime_error("List index out of range");

  ListNode<ItemType> *temp = m_head;
  ListNode<ItemType> *prev = NULL;
  // delete m_head if index == 0
  if (index == 0) {
    m_head = m_head->getNext();
    delete temp;
    m_length--;
    return;
  }
  int i = 0;
  while (i < index) {
    prev = temp; 
    temp = temp->getNext();
    i++;
  }
  // temp is now the immediate precursor to the item we want to delete
  prev->setNext(temp->getNext());
  m_length--;
  delete temp;
}

template <typename ItemType>
ItemType LinkedList<ItemType>::getItemAtIndex(int index){
  if (index < 0 || index > m_length - 1) {
    throw std::runtime_error("List index out of range");
  }
  ListNode<ItemType> *temp = m_head;
  int i = 0;
  while (i < m_length && i < index) {
    temp = temp->getNext(); 
    i++;
  }
  return temp->getValue();
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
