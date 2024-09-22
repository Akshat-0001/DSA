//approach using binary search:

#include <iostream>

using namespace std;


int firstocc(int arr[], int size, int key){
    int index=-1;
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
        index=mid;
        end=mid-1;
    }

     else if(arr[mid]>key){
        end=mid-1;
    }
    else if(arr[mid]<key)
    {
        start=mid+1;
    }

    mid= start+(end-start)/2;

    }
    return index;

}

int lastocc(int arr[], int size, int key){
    int index=-1;
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
        index=mid;
        start=mid+1;
    }

     else if(arr[mid]>key){
        end=mid-1;
    }
    else if(arr[mid]<key)
    {
        start=mid+1;
    }

    mid= start+(end-start)/2;

    }
    return index;

}

int main() {
    int arr[5]={5,7,8,10,12};
    int index=firstocc(arr, 5, 8);
    cout<< "firstocc at index:" << index;
    
    return 0;
}