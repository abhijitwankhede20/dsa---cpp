#include <iostream>
using namespace std;

int printarray(int arr[], int n, int index) {
    if(n == 0) {
        return 0;
    }
    cout << arr[index] << " ";
    printarray(arr, n-1, index+1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++) {
        cout << "Enter element " << i+1 << ":";
        cin >> arr[i];
    }

    cout << "The elemenst of the array are: " << printarray(arr,n, 0);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}