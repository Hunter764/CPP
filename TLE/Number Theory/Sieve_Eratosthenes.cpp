#include <bits/stdc++.h>
using namespace std;

#define ll long long  // Defining 'll' as shorthand for long long
const int mod = 1e9 + 7;  // A common large prime modulus used in competitive programming

const int N = 1e7;  // Limit for sieve
bool prime[N + 1];  // Boolean array to mark prime numbers

// prime[i] = 1 --> 'i' is a prime number
// prime[i] = 0 --> 'i' is a composite number

int main() {
    // Step 1: Initialize all numbers as prime
    fill(prime, prime + N + 1, 1); // Sets all elements to 'true' (assuming prime)

    // Step 2: 0 and 1 are not prime numbers
    prime[0] = prime[1] = 0;

    // Step 3: Sieve of Eratosthenes
    for (int i = 2; i * i <= N; i++) { // Optimized loop runs till √N
        if (prime[i]) {  // If 'i' is prime, mark its multiples as composite
            for (int j = i * i; j <= N; j += i) {  
                prime[j] = 0;  // Marking multiples of 'i' as non-prime
            }
        }
    }

    // Step 4: Output all prime numbers (optional)
    cout << "Prime numbers up to " << N << " are:\n";
    for (int i = 2; i <= N; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

