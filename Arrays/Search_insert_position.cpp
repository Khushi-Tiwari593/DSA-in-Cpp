#include <iostream>
using namespace std;

int searchInsert(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return low;
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << "Insert Position: " << searchInsert(arr, n, target);

    return 0;
}