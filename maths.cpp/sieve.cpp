#include<iostream>
#include<vector> // Needed for vector
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    // Print all prime numbers
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers up to " << n << " are: ";
    sieve(n);
    return 0;
}
