#ifndef HEAP_H_
#define HEAP_H_
#include<iostream>
using namespace std;

class heap{
    int arr[10];
    int size;
    public:
    heap();
    void insert(int data);
    void remove();
    void heapify();
    int get_parent(int loc);
    int get_root();
    void output();
};

#endif