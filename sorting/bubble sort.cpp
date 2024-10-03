#include <bits/stdc++.h>  // Include all standard C++ library headers
using namespace std;       // Use the standard namespace to avoid prefixing std::

// Function to perform Bubble Sort on a vector of integers
void bubbleSort(vector<int>& arr, int n)
{   
    // Outer loop for multiple passes (rounds) through the array
    // After each pass, one element is correctly positioned
    for(int i = 0; i < n - 1; i++) {

        bool swapped = false;
        // Inner loop for comparing adjacent elements
        // Reduces the number of comparisons by skipping the last i elements
        // as they are already sorted
        for(int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element, swap them
            // This pushes the largest element to the end of the unsorted part
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }

        }

        if(swapped==false){
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};  // Example array
    int n = arr.size();                              // Get the size of the array

    bubbleSort(arr, n);  // Sort the array using Bubble Sort

    // Print the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
