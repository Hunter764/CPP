#include <bits/stdc++.h>
using namespace std;

// Function to perform prime factorization using SPF
vector<pair<int, int>> primeFactorization(int x, vector<int> &spf) {
    vector<pair<int, int>> ans;
    while (x != 1) {
        int prime = spf[x];
        int cnt = 0;
        while (x % prime == 0) {
            cnt++;
            x /= prime;
        }
        ans.push_back({prime, cnt});
    }
    return ans;
}

// Function to compute SPF using the Sieve of Eratosthenes
void solve() {
    int maxN = 1e6;
    vector<bool> isPrime(maxN, true);
    vector<int> spf(maxN, 1e9);

    // Step 1: Initialize SPF for all numbers
    for (long long i = 2; i < maxN; i++) {
        if (isPrime[i]) {
            spf[i] = i;
            for (long long j = i * i; j < maxN; j += i) {
                isPrime[j] = false;
                spf[j] = min(spf[j], (int)i);
            }
        }
    }

    // Example usage: Prime factorization of 36
    int num = 36;
    vector<pair<int, int>> primeF = primeFactorization(num, spf);

    // Printing the prime factorization result
    cout << "Prime factorization of " << num << ":\n";
    for (auto p : primeF) {
        cout << p.first << "^" << p.second << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
