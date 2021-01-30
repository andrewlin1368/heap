#include "heap.h"

int main(){
    int arr[7]={0,1,2,3,4,5,6};
    heap h;
    for(int i=0;i<7;i++)
        h.insert(arr[i]);
    h.output();
    cout<<"\n";
    h.heapify();
    h.output();
    return 0;
}