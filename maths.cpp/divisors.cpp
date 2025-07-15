#include<iostream>
using namespace std;

void divisors(int n) {
    int i;
    
    // Print smaller divisors
    for(i = 1; i * i < n; i++) {
        if(n % i == 0)
            cout << i << " ";
    }

    // If n is a perfect square, print i only once
    if(i * i == n)
        cout << i << " ";

    // Print larger divisors
    for(i = i - 1; i >= 1; i--) {
        if(n % i == 0)
            cout << n / i << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    divisors(n); // just call the function
    return 0;
}
