#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    vector<int> result;

    result.push_back(firstOccurrence(arr, n, target));
    result.push_back(lastOccurrence(arr, n, target));

    cout << "[";
    cout << result[0] << ", " << result[1];
    cout << "]";

    return 0;
}