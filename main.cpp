#include "heap.h"

int main(){
    int arr[8]={0,1,2,3,4,5,6,7};
    heap h;
    for(int i=0;i<8;i++)
        h.insert(arr[i]);
    cout<<"Before: ";
    h.output();
    cout<<"\nAfter: ";
    h.heapify();
    h.output();
    return 0;
}