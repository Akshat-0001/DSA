#include<bits/stdc++.h>
using namespace std;

int getunique(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[]= {2,10,11,10,2,13,15,13,15};
    int n=9;

    int finalAns= getunique(arr, n);
    cout<<"final answer is:" << finalAns << endl;
}