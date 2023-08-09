#include <iostream>

using namespace std;

// Linear search function
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;  // Return the index if target is found
    }

    return -1;  // Target not found
}

int main() {
    int arr[] = {2, 5, 7, 10, 15, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 10;
    int result = linearSearch(arr, size, target);

    if (result == -1)
        cout << "Target not found." << endl;
    else
        cout << "Target found at index " << result << "." << endl;

    return 0;
}
