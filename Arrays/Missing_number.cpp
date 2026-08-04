#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {3, 0, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing Number: " << missingNumber(arr, n);

    return 0;
}