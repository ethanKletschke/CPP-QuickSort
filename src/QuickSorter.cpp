#include "QuickSorter.hpp"

int QuickSorter::partition(int arr[], int low, int high) {
    // The pivot index.
    int pivot = arr[high];
    // The index to return.
    int in = low - 1;
    int swapper = 0; // A swapper variable to use later.

    // Loop from low to high.
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            //
            int temp = 0;

            // Increase the index to return.
            in++;

            // Swap array values at indexes "in" and "j".
            temp = arr[in];
            arr[in] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap array values at indexes "in + 1" and "high".
    swapper = arr[in + 1];
    arr[in + 1] = arr[high];
    arr[high] = swapper;

    // Return the index.
    return in + 1;
}

void QuickSorter::sort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        sort(arr, low, pivotIndex - 1);
        sort(arr, pivotIndex + 1, high);
    }
}
