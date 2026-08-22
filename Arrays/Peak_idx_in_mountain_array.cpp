#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    int arr[] = {0, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Peak Index: " << peakIndexInMountainArray(arr, n);

    return 0;
}