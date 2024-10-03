#include <bits/stdc++.h>
using namespace std;

// Function to perform Selection Sort on a vector of integers
void selectionSort(vector<int>& arr, int n) 
{
    // Outer loop that moves the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        int minindex = i; // Assume the current element at index 'i' is the minimum

        // Inner loop to find the smallest element in the unsorted portion of the array
        // The unsorted portion starts from index 'i+1' and goes up to 'n'
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) // If the current element 'arr[j]' is smaller than 'arr[minindex]'
                minindex = j;            // Update 'minindex' to point to the new minimum element
        }
        
        // After finding the minimum element in the unsorted part, swap it with the element at index 'i'
        // This places the smallest element in the correct sorted position
        swap(arr[minindex], arr[i]);
    }
}
