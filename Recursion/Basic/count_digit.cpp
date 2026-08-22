#include<iostream>
using namespace std;

int countdigits(int n) {
    if(n == 0) {
        return 0;
    }
    return 1 + countdigits(n / 10);
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits in " << n << " is: " << countdigits(n) << endl;
    return 0;
}