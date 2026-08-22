#include<iostream>
using namespace std;

int reverse(int n, int rev = 0) {
    if(n == 0) {
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}
bool palindrome(int n) {
    int original =n;
    int reversed = reverse(n);
    return original == reversed;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Is " << n << " a palindrome? " << (palindrome(n) ? "Yes" : "No") << endl;
    return 0;
}
