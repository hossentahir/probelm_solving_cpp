#include <iostream>
using namespace std;

// Binary search function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // Target not found
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 10, 15, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 2;
    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1)
        cout << "Target not found." << endl;
    else
        cout << "Target found at index " << result << "." << endl;

    return 0;
}
