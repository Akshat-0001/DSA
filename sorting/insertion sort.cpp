// Header files
#include <iostream>  // For standard input/output
#include <vector>    // For using vectors in C++

// Using the standard namespace
using namespace std;

// Function to perform Insertion Sort on a given array
void insertionSort(int n, vector<int> &arr) {
    // Loop through the elements of the array starting from the second element
    // The first element (at index 0) is already "sorted" in its own
    for (int i = 1; i < n; i++) {
        // Store the current element in a temporary variable
        int temp = arr[i];

        // Initialize another pointer 'j' to point to the element just before 'i'
        int j = i - 1;

        // Shift elements of the sorted segment (arr[0] to arr[i-1])
        // to the right until the correct position for 'temp' is found
        while (j >= 0) {
            if (arr[j] > temp) {
                // Shift element at index 'j' to the right (to index 'j+1')
                arr[j + 1] = arr[j];
            } else {
                // If we find the correct position for 'temp', stop shifting
                break;
            }
            j--; // Move to the previous element in the sorted part
        }

        // Place the 'temp' element at its correct position
        arr[j + 1] = temp;
    }
}

int main() {
    // Example usage of insertionSort function
    vector<int> arr = {12, 11, 13, 5, 6};  // Sample input array
    int n = arr.size();                    // Size of the array

    // Call the insertionSort function
    insertionSort(n, arr);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
