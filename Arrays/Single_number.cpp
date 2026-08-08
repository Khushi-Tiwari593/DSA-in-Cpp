#include <iostream>
using namespace std;

int singleNumber(int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Single Number: " << singleNumber(arr, n);

    return 0;
}