#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> sieveOfEratosthenes(int n) {
    // Create a boolean vector to mark prime numbers
    vector<bool> isPrime(n + 1, true);
    unordered_set<int> primes;

    // 0 and 1 are not prime numbers
    isPrime[0] = isPrime[1] = false;

    // Perform the sieve
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }

    // Store all primes in the unordered_set
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.insert(i);
        }
    }

    return primes;
}

int main() {
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    unordered_set<int> primes = sieveOfEratosthenes(n);

    // Display the prime numbers
    cout << "Prime numbers up to " << n << " are:\n";
    for (int prime : primes) {
        cout << prime << " ";
    }

    return 0;
}
