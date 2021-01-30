#include "heap.h"

heap::heap(){
    size=0;
    for(int i=0;i<10;i++)
        arr[i]=-1;
}

void heap::insert(int data){
    if(size>10)
        return;
    arr[size]=data;
    size++;
}

void heap::remove(){
    arr[0]=arr[size-1];
    size--;
    heapify();
}

void heap::heapify(){
    for(int i=size-1;i>0;){
        int x=arr[get_parent(i)];
        if((i-1)%2!=0){
            if(arr[i]>arr[i-1]){
                if(arr[i]>x)
                    swap(arr[i],arr[get_parent(i)]);
            }
            else if(arr[i]<arr[i-1]){
                if(arr[i-1]>x)
                    swap(arr[i-1],arr[get_parent(i)]);
            }
        int j=i;
        while(j<size){
            if(j*2+2<size){
                int x=arr[j];
                if(arr[j*2+1]>arr[j*2+2]){
                    if(arr[j*2+1]>x)
                        swap(arr[j],arr[j*2+1]);
                }
                else{
                    if(arr[j*2+2>x])
                        swap(arr[j*2+2],arr[j]);
                }
                j=j*2+2;
            }
            else if(j*2+1<size){
                int x=arr[j];
                if(arr[j*2+1]>x)
                    swap(arr[j],arr[j*2+1]);
                j=j*2+1;
            }
            else{
                break;
            }
        }
        i-=2;
        }
        else{
            if(arr[i]>x)
                swap(arr[i],arr[get_parent(i)]);
            int j=i;
            while(j<size){
                if(j*2+2<size){
                    int x=arr[j];
                    if(arr[j*2+1]>arr[j*2+2]){
                        if(arr[j*2+1]>x)
                            swap(arr[j],arr[j*2+1]);
                    }
                    else{
                        if(arr[j*2+2>x])
                            swap(arr[j*2+2],arr[j]);
                    }
                    j=j*2+2;
                }
                else if(j*2+1<size){
                    int x=arr[j];
                    if(arr[j*2+1]>x)
                        swap(arr[j],arr[j*2+1]);
                    j=j*2+1;
                }
                else{
                    break;
                }
            }
            i--;
        }
    }
}

int heap::get_parent(int loc){
    if(loc%2==0)
        return loc/2 -1;
    return loc/2;
}

int heap::get_root(){
    return arr[0];
}

void heap::output(){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}