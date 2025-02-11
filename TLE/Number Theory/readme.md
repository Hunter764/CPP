# **Factors of a Number**

```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>factor;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            factor.push_back(i);
        }
    }
    cout<<factor.size()<<endl;
    return 0;
}

// 12=>6factors

TC:- O(N)

```


# ** Optimised code **

```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>factors;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            factors.push_back(i);
            if(i !=n/i){
                factors.push_back(n/i);
            }
        }
    }
    sort(factors.begin(),factors.end());
    cout<<"The factors are: ";
    for(int factor : factors){
        cout<<factor<<" ";
    }
    cout<<"No. of factors: "<<factors.size()<<endl;
}


//TC : O(sqrt(n))

```

# **Prime Factor**

```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> prime_factor;
    for(int i=2; i*i <= n; i++){
        if(n%i ==0){
            while(n%i ==0){
                n/=i;
                prime_factor.push_back(i);
            }
        }
    }
    if(n>1){
        prime_factor.push_back(n);
    }

    sort(prime_factor.begin(), prime_factor.end());

    cout<<"The prime factors are: ";
    for(int fact : prime_factor){
        cout<<fact<<" ";
    }
}

// 36
// The prime factors are: 2 2 3 3 
```




**Sieve of Eratosthenes**
=========================

The **Sieve of Eratosthenes** is an efficient algorithm to find all prime numbers up to a given limit **N** in **O(N log log N)** time complexity.

* * * * *

**Algorithm**
-------------

1.  **Initialize** an array `prime[]` where `prime[i] = 1` (assume all numbers are prime initially).
2.  **Mark** `prime[0]` and `prime[1]` as `0` (since 0 and 1 are not prime).
3.  **For each number `i` from `2` to `√N`**:
    -   If `prime[i]` is `1`, mark all multiples of `i` starting from `i²` as `0`.
4.  **All remaining numbers with `prime[i] = 1` are prime numbers**.

* * * * *

**C++ Code Implementation**
---------------------------

```
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

```

* * * * *

**Time Complexity Analysis**
----------------------------

-   **Outer loop (over primes up to N\sqrt{N})**: **O(N)O(\sqrt{N})**
-   **Inner loop (marking multiples)**: **O(Nlog⁡log⁡N)O(N \log \log N)**
-   **Overall complexity**: **O(Nlog⁡log⁡N)O(N \log \log N)**

**Space Complexity**
--------------------

-   Uses an **O(N) boolean array**, which is efficient for large values of N.

* * * * *

**Example Execution**
---------------------

### **Input**

```
N = 20

```

### **Output**

```
Prime numbers up to 20 are:
2 3 5 7 11 13 17 19

```

* * * * *

**Key Optimizations**
---------------------

✅ **Loop runs till N\sqrt{N} instead of N**\
✅ **Start marking multiples from i2i^2 instead of `2*i`**\
✅ **Uses `fill()` for quick initialization**\
✅ **Time complexity reduced to O(Nlog⁡log⁡N)O(N \log \log N)**

* * * * *

**Applications of Sieve of Eratosthenes**
-----------------------------------------

-   Finding prime numbers efficiently in **competitive programming**.
-   Used in **RSA cryptography** (Prime Number Generation).
-   Efficient for **Prime Factorization** and **Number Theory** problems.

* * * * *

🚀 **This is one of the fastest algorithms to find prime numbers up to a large limit (e.g., 10710^7 or more).**




It looks like you want to modify the **Sieve of Eratosthenes** to also compute the **Smallest Prime Factor (SPF)** for each number. Below is the **optimized Sieve of Eratosthenes** that calculates **both prime numbers and the smallest prime factor (SPF)** for each number efficiently.

* * * * *


# **Sieve with Smallest Prime Factor (SPF)**

The **Sieve of Eratosthenes with SPF (Smallest Prime Factor)** is an optimized approach to compute **both prime numbers and the smallest prime factor for each number** in **O(N log log N)** time complexity. This is highly useful for **fast prime factorization**.

---

## **Algorithm Explanation**

1. **Initialize** an array `spf[]`, where `spf[i] = i` (each number is initially its own smallest prime factor).
2. **Iterate through numbers from `2` to `√N`**:
  


```
#include <bits/stdc++.h>
using namespace std;

#define ll long long  // Defining 'll' as shorthand for long long
const int mod = 1e9 + 7;  // A common large prime modulus used in competitive programming

const int N = 1e7;  // Limit for sieve
int spf[N + 1];  // Smallest Prime Factor array

// Function to compute SPF using the Sieve of Eratosthenes
void sieve_spf() {
    // Step 1: Initialize each number as its own SPF
    for (int i = 1; i <= N; i++) {
        spf[i] = i;
    }

    // Step 2: Sieve process
    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) {  // If i is still its own SPF, it is prime
            for (int j = i * i; j <= N; j += i) {
                if (spf[j] == j) {  // If j has not been marked yet
                    spf[j] = i;  // Mark the smallest prime factor
                }
            }
        }
    }
}

// Function to find prime factorization using SPF
vector<int> get_prime_factors(int x) {
    vector<int> factors;
    while (x != 1) {
        factors.push_back(spf[x]);
        x /= spf[x];
    }
    return factors;
}

int main() {
    sieve_spf();  // Compute the smallest prime factors using sieve

    // Example usage: Find prime factorization of a number
    int num;
    cout << "Enter a number to find its prime factors: ";
    cin >> num;

    vector<int> factors = get_prime_factors(num);
    cout << "Prime factorization of " << num << ": ";
    for (int f : factors) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}

```

* * * * *

### **Explanation**

1.  **`spf[i]` stores the smallest prime factor of `i`**

    -   If `spf[i] = i`, then `i` is a **prime number**.
    -   If `spf[i] ≠ i`, then `spf[i]` is the smallest prime divisor of `i`.
2.  **How SPF Helps?**

    -   Helps in **fast prime factorization** (in **O(log N)** per query).
    -   Instead of dividing by **all primes**, we just keep dividing by `spf[x]`.

* * * * *

### **Example Execution**

#### **Input**

```
Enter a number to find its prime factors: 36

```

#### **Output**

```
Prime factorization of 36: 2 2 3 3

```

* * * * *

### **Time Complexity Analysis**

-   **Building SPF array:** **O(N log log N)** (same as Sieve of Eratosthenes).
-   **Prime Factorization Query:** **O(log N)** per query.

* * * * *

### **Applications**

✅ **Prime factorization in O(log N) per query**\
✅ **Finding unique prime factors of a number**\
✅ **Efficiently solving number theory problems**\
✅ **Useful in competitive programming and cryptography**




# **SPF for PrimeFactorization**

```
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

```