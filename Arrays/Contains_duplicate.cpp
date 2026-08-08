#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicate(int arr[], int n) {
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {
            return true;
        }

        s.insert(arr[i]);
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (containsDuplicate(arr, n)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}