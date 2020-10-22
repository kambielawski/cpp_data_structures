#ifndef LIST_NODE_H
#define LIST_NODE_H

template <typename ItemType>
class ListNode {
private:
ItemType m_value;
ListNode* m_next;

public:
ListNode(ItemType value);
ListNode(ItemType value, ListNode<ItemType>* next);
~ListNode();
ListNode<ItemType>* getNext();
ItemType getValue();
void setNext(ListNode<ItemType>* next);
void setValue(ItemType value);

};

template <typename ItemType>
ListNode<ItemType>::ListNode(ItemType value){ 
  m_value = value;
  m_next = nullptr;
}

template <typename ItemType>
ListNode<ItemType>::ListNode(ItemType value, ListNode<ItemType>* next) {
  m_value = value;
  m_next = next;
}

template <typename ItemType>
ListNode<ItemType>::~ListNode() {
  m_next = nullptr;
}


template <typename ItemType>
ListNode<ItemType>* ListNode<ItemType>::getNext() {
  return *m_next;
}


template <typename ItemType>
ItemType ListNode<ItemType>::getValue() {
  return m_value;
}


template <typename ItemType>
void ListNode<ItemType>::setValue(ItemType value) {
  m_value = value;
}


template <typename ItemType>
void ListNode<ItemType>::setNext(ListNode* next) {
  m_next = next;
}

#endif
