#include <iostream>

using namespace std;

bool findTarget(int arr[][4], int row, int col, int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target)
            return true;
        }
    }
    return false;
}

// void printArray(int arr[][4], int row, int col){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// }

// void colWisePrint(int arr[][4], int row, int col){
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<< arr[j][i]<< " ";
//         }
//         cout<<endl;
//     }
// }

int main() {
//     //2d array creating

//     //int arr[3][3];

//     //initialise

//     int arr[3][4]= {
//         {1,2,3,4},{5,6,7,8},{9,10,11,12}
//     };
//     int row=3;
//     int col=4;
    
    // printArray(arr, row, col);
    // colWisePrint(arr, row, col);
    //int brr[]= {1,2,3,4};

    //int crr[][4]={{1,2,3,4}, {3,4,5,6}, {5,6,4,3}};

    //int drr[][]={{1,2,3,4}, {3,4,5,6}, {5,6,4,3}};


    //to initilise an 2d array we must need column size (elements)

    //in every case 2d array needs to be initialised with at least the column size

//input
// int arr[3][3];
// int row=3;
// int col=3;

// for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){

//         cout<<"enter the input for row index: "<<i<<"enter the index for col index: "<<j <<endl;

//         cin>>arr[i][j];

//     }
// }


    int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=11;

    int row=3;
    int col=4;

    cout<< "Found or not: "<< findTarget(arr, row, col, target) << endl;

}

