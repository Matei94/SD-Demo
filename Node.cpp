#include <cstddef>
#include "Node.h"

template <typename T>
Node<T>::Node() {
  this->value = 0;
  this->next = NULL;
  this->prev = NULL;
}

template <typename T>
Node<T>::Node(T value) {
  Node<T>();
  this->value = value;
}

template <typename T>
Node<T>::Node(const Node<T>& n) {
  this->value = n.value;
  this->next  = n.next;
  this->prev  = n.prev;
}

template <typename T>
void Node<T>::operator=(const Node<T>& n) {
  this->value = n.value;
  this->next  = n.next;
  this->prev  = n.prev;
}

template <typename T>
Node<T>::~Node() {
  /* Do nothing */
}

template <typename T>
T Node<T>::getValue() {
  return this->value;
}

template <typename T>
Node<T> *Node<T>::getNext() {
  return this->next;
}

template <typename T>
Node<T> *Node<T>::getPrev() {
  return this->prev;
}
