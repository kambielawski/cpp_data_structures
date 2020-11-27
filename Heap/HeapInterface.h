#ifndef HEAP_INTERFACE_H
#define HEAP_INTERFACE_H

template <typename ItemType>
class HeapInterface {
public:
virtual void insert(int key, ItemType value) = 0;
virtual ItemType getMin() const = 0;
virtual ItemType extractMin() = 0;

};

#endif
