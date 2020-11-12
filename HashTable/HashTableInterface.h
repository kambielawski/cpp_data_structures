#ifndef HASH_TABLE_INTERFACE_H
#define HASH_TABLE_INTERFACE_H

template <typename KeyType, typename ItemType>
class HashTableInterface {
public:
virtual bool isEmpty() const = 0;
virtual int numItems() const = 0;
virtual bool add(KeyType searchKey, ItemType item) = 0; // 1 if successful, 0 if not
virtual bool remove(KeyType searchKey) = 0; // 1 if successful, 0 if not
virtual bool contains(KeyType searchKey) const = 0;

};

#endif
