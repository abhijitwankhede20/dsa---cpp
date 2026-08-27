#include <iostream>
using namespace std;

int sum (int arr[], int n, int index) {
    if(index == n) return 0;
    return arr[index] + sum(arr, n , index + 1);
}

int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of array element is : " << sum(arr, n, 0);
}