#include <iostream>
using namespace std;

int count_even_numbers(int arr[], int n, int index) {
    if(index == n) return 0;
    int cnt = (arr[index] % 2 == 0) ? 1 : 0;
    return cnt + count_even_numbers(arr, n, index + 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Total numbers of evens in array: " << count_even_numbers(arr, n, 0);
    return 0;
}