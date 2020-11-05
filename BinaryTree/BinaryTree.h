#include <iostream>
#include "BinaryTreeNode.h"

#ifndef BINARY_TREE
#define BINARY_TREE

template <typename KeyType, typename ValueType>
class BinaryTree {
private:
BinaryTreeNode<KeyType, ValueType> *m_root;

public:
BinaryTree();
~BinaryTree();
BinaryTreeNode<KeyType, ValueType> *getRoot();
void insert(KeyType key, ValueType value);
void insert(BinaryTreeNode<KeyType, ValueType> *newNode, BinaryTreeNode<KeyType, ValueType> *parent);

};

#endif

template <typename KeyType, typename ValueType>
BinaryTree<KeyType, ValueType>::BinaryTree() {
  m_root = nullptr;
}

template <typename KeyType, typename ValueType>
BinaryTree<KeyType, ValueType>::~BinaryTree() {
  // recursively delete nodes
}

template <typename KeyType, typename ValueType>
BinaryTreeNode<KeyType, ValueType>* BinaryTree<KeyType, ValueType>::getRoot() {
  return m_root;
}

template <typename KeyType, typename ValueType>
void BinaryTree<KeyType, ValueType>::insert(KeyType key, ValueType value) {
  BinaryTreeNode<KeyType, ValueType> *node = new BinaryTreeNode<KeyType, ValueType>(key, value);
  if (m_root == nullptr) {
    m_root = node; 
  } else {
    insert(node, m_root);
  }
}

template <typename KeyType, typename ValueType>
void BinaryTree<KeyType, ValueType>::insert(BinaryTreeNode<KeyType, ValueType> *newNode, BinaryTreeNode<KeyType, ValueType> *parent) {

}
