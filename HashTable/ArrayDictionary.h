#ifndef ARRAY_DICTIONARY_H
#define ARRAY_DICTIONARY_H

#include <iostream>
using namespace std;

template <typename KeyType, typename ItemType>
struct Entry {
ItemType item;
KeyType key;

Entry() {}
Entry(KeyType key, ItemType item) : key(key), item(item) {}

bool operator==(const Entry<KeyType, ItemType>& rightHandItem) const;
bool operator>(const Entry<KeyType, ItemType>& rightHandItem) const;
};

template <typename KeyType, typename ItemType>
class ArrayDictionary { // this isn't actually a HashTable
private:
  static const int DEFAULT_CAPACITY = 21;
  Entry<KeyType, ItemType>* m_items; // array that will use linear probing
  int m_size;
  int m_maxSize;
  
  int findEntryIndex(int firstIndex, int lastIndex, const KeyType& searchKey) const; // binary search array for entry

public:
  ArrayDictionary();
  ~ArrayDictionary();
  bool isEmpty() const;
  int numItems() const;
  bool add(KeyType searchKey, ItemType item);
  bool remove(KeyType searchKey);
  bool contains(KeyType searchKey) const;
  void traverse(void visit(ItemType&)) const;
  void printSequential() const;

};

template <typename KeyType, typename ItemType>
ArrayDictionary<KeyType, ItemType>::ArrayDictionary() : m_size(0) {
  m_items = new Entry<KeyType, ItemType>[DEFAULT_CAPACITY];
  m_maxSize = DEFAULT_CAPACITY;
}

template <typename KeyType, typename ItemType>
ArrayDictionary<KeyType, ItemType>::~ArrayDictionary() {
  delete [] m_items;
}

template <typename KeyType, typename ItemType>
bool ArrayDictionary<KeyType, ItemType>::isEmpty() const {
  return (m_size == 0);  
}

template <typename KeyType, typename ItemType>
int ArrayDictionary<KeyType, ItemType>::numItems() const {
  return m_size;
}

template <typename KeyType, typename ItemType>
bool ArrayDictionary<KeyType, ItemType>::add(KeyType searchKey, ItemType item) {
  bool canAddItem = m_size < m_maxSize;
  if (canAddItem) {
    int index = m_size;
    while ( (index > 0) && (searchKey < m_items[index-1].key) ) {
      m_items[index] = m_items[index-1];
      index--;
    }
    m_items[index] = Entry<KeyType, ItemType>(searchKey, item);
    m_size++;
  }
  return canAddItem;
}

template <typename KeyType, typename ItemType>
bool ArrayDictionary<KeyType, ItemType>::remove(KeyType rearchKey) {
  return false;
}

template <typename KeyType, typename ItemType>
void ArrayDictionary<KeyType, ItemType>::traverse(void visit(ItemType&)) const {
  int i = 0;
  while (i < m_size) {
    visit(m_items[i].item);
    i++;
  }
}

template <typename KeyType, typename ItemType>
void ArrayDictionary<KeyType, ItemType>::printSequential() const {
  int i = 0;
  while (i < m_size) {
    cout << m_items[i].key << " " << m_items[i].item << endl;
    i++;
  }
}

template <typename KeyType, typename ItemType>
bool ArrayDictionary<KeyType, ItemType>::contains(KeyType searchKey) const {
  return false; // binary search for item
}


#endif
