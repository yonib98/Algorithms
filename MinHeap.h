#ifndef HEAPSORT_MINHEAP_H
#define HEAPSORT_MINHEAP_H
#include <vector>
template <class T>
class MinHeap{
private:
class AlmostCompleteTree{
    class Node{
        Node* next;
        T val;
        friend class AlmostCompleteTree;
    };
    Node* root;
    int size;
    friend class MinHeap<T>;
    AlmostCompleteTree tree;
    void insert(const T&);
    T remove(const T&);
};
public:
    static MinHeap makeHeap(std::vector<T>& elements);
    MinHeap();
    T getMin();
    void insert(const T&);
    T removeMin();
};
#endif //HEAPSORT_MINHEAP_H
