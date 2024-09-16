//find max and min of 2d array
#include <iostream>
#include <limits.h>

using namespace std;

void rowWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum=sum + arr[i][j];

        }
        cout<< sum << endl;
    }
}

int findMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxAns){
            maxAns=arr[i][j];
            }
        }
    }
    return maxAns;

}

int findMin(int arr[][4], int row, int col){
    int minAns = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<minAns)
            minAns = arr[i][j];
        }
    }
    return minAns;
}

int main() {
    int arr[3][4]= {{4,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row=3;
    int col=4;

    // findMax(arr, row, col);
    // findMin(arr, row, col);

    // cout<< "printing max no: " << findMax(arr,row,col) << endl;
    // cout<< "printing min no: " << findMin(arr,row,col) << endl;
    rowWiseSum(arr, row, col);
    return 0;
}