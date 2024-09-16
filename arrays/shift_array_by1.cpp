//shift arrays elements by 1
#include <iostream>

using namespace std;

void shift(int arr[], int n){
    //step 1: store temp

    int temp= arr[n-1];

    //step 2: shift arr
    //shift--> arr[i]= arr[i-1]

    for(int i=n-1; i>=1; i--){
        arr[i]= arr[i-1];
    }

    //step 3: copy temp to arr[0]
    arr[0]= temp;
}

int main() {
    int arr[]= {10,20,30,40,50,60};
    int n= 6;

    shift(arr,n);

    //printing

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    } 

    return 0;
}



// 1st hw left mai shift kardenaa

//2nd hw: 2 shifting krni haii