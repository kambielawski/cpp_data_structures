#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <iostream>
#include "BinaryTreeNode.h"
#include "BinaryTreeInterface.h"

template <typename KeyType, typename ValueType>
class BinarySearchTree : BinaryTreeInterface<KeyType, ValueType>{
private:
BinaryTreeNode<KeyType, ValueType> *m_root;

public:
BinarySearchTree();
~BinarySearchTree();
BinaryTreeNode<KeyType, ValueType> *getRoot();
void insert(KeyType key, ValueType value);
void insert(BinaryTreeNode<KeyType, ValueType> *newNode, BinaryTreeNode<KeyType, ValueType> *parent);
ValueType find(KeyType key);

};

#endif

template <typename KeyType, typename ValueType>
BinarySearchTree<KeyType, ValueType>::BinarySearchTree() {
  m_root = nullptr;
}

template <typename KeyType, typename ValueType>
BinarySearchTree<KeyType, ValueType>::~BinarySearchTree() {
  // recursively delete nodes
}

template <typename KeyType, typename ValueType>
BinaryTreeNode<KeyType, ValueType>* BinarySearchTree<KeyType, ValueType>::getRoot() {
  return m_root;
}

template <typename KeyType, typename ValueType>
void BinarySearchTree<KeyType, ValueType>::insert(KeyType key, ValueType value) {
  BinaryTreeNode<KeyType, ValueType> *node = new BinaryTreeNode<KeyType, ValueType>(key, value);
  if (m_root == nullptr) {
    m_root = node; 
  } else {
    insert(node, m_root);
  }
}

template <typename KeyType, typename ValueType>
void BinarySearchTree<KeyType, ValueType>::insert(BinaryTreeNode<KeyType, ValueType> *newNode, BinaryTreeNode<KeyType, ValueType> *parent) {
  if (newNode->getKey() > parent->getKey()) {
    if (parent->getRightChild() != nullptr) {
      insert(newNode, parent->getRightChild());
    } else {
      parent->setRightChild(newNode);
    }
  } else {
    if (parent->getLeftChild() != nullptr) {
      insert(newNode, parent->getLeftChild());
    } else {
      parent->setLeftChild(newNode);
    }
  }
}
