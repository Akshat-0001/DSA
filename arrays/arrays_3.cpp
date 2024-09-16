//sorting neg and pos elements of an array using 2 pointer approach

#include <iostream>

using namespace std;

// we will use index variable for traversal into array
void SortArray(int arr[], int size){
    int j=0;
    // j--> memory block -> jaha pr ill store negative number from 0th index
    for(int index=0; index<size; index++){
        //index entire array ko traverse krne keliye
        if(arr[index]<0){
            swap(arr[index], arr[j]);
            j++;
        }
    }

};

int main() {
    int arr[]= {23,-7,12,-10,-11,40,60};
    int size=7;

    SortArray(arr, size);

    cout<<"printing sorted array: "<< endl;
    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    
    return 0;
}


//hw: leetcode: 2149. Rearrange Array Elements by Sign