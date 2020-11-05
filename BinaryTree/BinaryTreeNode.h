#include <stdlib.h>

#ifndef BINARY_TREE_NODE
#define BINARY_TREE_NODE

template <typename KeyType, typename ValueType>
class BinaryTreeNode {
private:
BinaryTreeNode<KeyType, ValueType>* m_leftchild;
BinaryTreeNode<KeyType, ValueType>* m_rightchild;
KeyType m_key;
ValueType m_value;

public:
BinaryTreeNode(KeyType key, ValueType value);
~BinaryTreeNode();
KeyType getKey();
ValueType getValue();
BinaryTreeNode<KeyType, ValueType> *getLeftChild();
BinaryTreeNode<KeyType, ValueType> *getRightChild();
void setLeftChild(BinaryTreeNode<KeyType, ValueType> *newLeftChild);
void setRightChild(BinaryTreeNode<KeyType, ValueType> *newRightChild);

};

#endif
 
template <typename KeyType, typename ValueType>
BinaryTreeNode<KeyType, ValueType>::BinaryTreeNode(KeyType key, ValueType value) {
  m_key = key;
  m_value = value;
  m_leftchild = nullptr;
  m_rightchild = nullptr;
}
template <typename KeyType, typename ValueType>
BinaryTreeNode<KeyType, ValueType>::~BinaryTreeNode() {
  m_leftchild = nullptr;
  m_rightchild = nullptr;
}

template <typename KeyType, typename ValueType>
KeyType BinaryTreeNode<KeyType, ValueType>::getKey() {
  return m_key;
}

template <typename KeyType, typename ValueType>
ValueType BinaryTreeNode<KeyType, ValueType>::getValue() {
  return m_value;
}

template <typename KeyType, typename ValueType>
BinaryTreeNode<KeyType, ValueType>* BinaryTreeNode<KeyType, ValueType>::getLeftChild() {
  return m_leftchild;
}

template <typename KeyType, typename ValueType>
BinaryTreeNode<KeyType, ValueType>* BinaryTreeNode<KeyType, ValueType>::getRightChild() {
  return m_rightchild;
}

template <typename KeyType, typename ValueType>
void BinaryTreeNode<KeyType, ValueType>::setLeftChild(BinaryTreeNode<KeyType, ValueType> *newLeftChild) {
  m_leftchild = newLeftChild;
}

template <typename KeyType, typename ValueType>
void BinaryTreeNode<KeyType, ValueType>::setRightChild(BinaryTreeNode<KeyType, ValueType> *newRightChild) {
  m_rightchild = newRightChild;
}
