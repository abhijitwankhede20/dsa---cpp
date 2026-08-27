#include<iostream>
using namespace std;

int printArray(int n, int arr[], int index) {
    if(index == n) {
        return 0;
    }
    printArray(n, arr, index + 1);
    cout << arr[index] << " ";
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "element in reverse order: " << printArray(n, arr, 0);
    for(int i = 0; i<n; i++) {
        cout << arr[i];
    }
    return 0;
}