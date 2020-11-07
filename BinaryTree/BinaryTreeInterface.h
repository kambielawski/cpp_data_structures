#ifndef BINARY_TREE_INTERFACE
#define BINARY_TREE_INTERFACE

template <typename KeyType, typename ValueType>
class BinaryTreeInterface {
public:
virtual void insert(KeyType key, ValueType value) = 0;
virtual int find(KeyType key) = 0;
};

#endif
