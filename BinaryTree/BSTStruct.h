#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>
#include <stdexcept>

template <typename ItemType>
struct BinaryTreeNode {
  int key;
  ItemType value;
  BinaryTreeNode<ItemType> *leftChild;
  BinaryTreeNode<ItemType> *rightChild;

  BinaryTreeNode<ItemType>(int key, ItemType item) : key(key), value(item) {}
};

template <typename ItemType>
class BinarySearchTree {
private:
BinaryTreeNode<ItemType> *m_root;

public:
BinarySearchTree();
~BinarySearchTree();
void insert(int key, ItemType value);
void insert(BinaryTreeNode<ItemType> *newNode, BinaryTreeNode<ItemType> *parent);
int find(int key);
BinaryTreeNode<ItemType> *getRoot() const;

};

template <typename ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() : m_root(nullptr) {}

template <typename ItemType>
BinarySearchTree<ItemType>::~BinarySearchTree() {
  // recursively delete nodes
}

template <typename ItemType>
void BinarySearchTree<ItemType>::insert(int key, ItemType value) {
  BinaryTreeNode<ItemType> *newNode = new BinaryTreeNode<ItemType>(key, value);
  if (m_root == nullptr) {
    m_root = newNode;
    return;
  } else {
    this->insert(newNode, m_root);
  }
}

template <typename ItemType>
int BinarySearchTree<ItemType>::find(int key) {
  return 0;
}

template <typename ItemType>
BinaryTreeNode<ItemType>* BinarySearchTree<ItemType>::getRoot() const {
  return m_root;
}

template <typename ItemType>
void BinarySearchTree<ItemType>::insert(BinaryTreeNode<ItemType> *newNode, BinaryTreeNode<ItemType> *parent) {
  std::cout << "parent stuff: " << parent->key << parent->value << std::endl;
  std::cout << "newnode stuff: " << newNode->key << newNode->value << std::endl;
  
  if (newNode->key > parent->key) {
    if (parent->rightChild != nullptr) {
      insert(newNode, parent->rightChild);
    } else {
      parent->rightChild = newNode;
    }
  } else {
    if (parent->leftChild != nullptr) {
      insert(newNode, parent->leftChild);
    } else {
      parent->leftChild = newNode;
    }
  }
}


#endif
