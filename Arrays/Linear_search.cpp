#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if ( arr[i] == target){
            return i;
        }
    }
    return -1; 
}
int main (){
    int n = 7;
    int arr[n] = { 4, 2, 7, 8, 2, 1, 5};
    int target;
    cout <<"Enter element you want to search: ";
    cin >> target;

    int result = linearSearch(arr, n, target);
    if( result != -1)
        cout <<"Element found at index " << result << endl;
    else
        cout <<"Element not found !" << endl;
    return 0;
}