// sorting 0s and 1s

// 2 pointer approach hw mein krna hai 

//couting approach

#include <iostream>

using namespace std;

void sortZeroOne(int arr[], int n){

    int zerocount=0;
    int onecount=0;
    
    //step 1: count zero and one
    for(int i=0; i<n; i++){
        if(arr[i]==0)
        zerocount++;
        if(arr[i]==1)
        onecount++;
    }

// step 2: place all zeroes first

int index=0;

while(zerocount--){
    arr[index]=0;
    index++;
}

while(onecount--){
    arr[index]=1;
    index++;
}

}

int main(){
    int arr[]= {0,0,1,1,0,1,0,1,0,1,1,1,0};
    int n=13;

    sortZeroOne(arr,n);
    
    //printing array

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}