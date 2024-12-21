
// finding the positions of 1 bits in the binary representation of a number  x.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; // Input number
    cout << "Enter a number (x): ";
    cin >> x;

    cout << "Positions of 1-bits in the binary representation of " << x << ": ";

    // Loop through 30 bits (sufficient for numbers up to 10^9)
    for (int i = 0; i < 30; i++) {
        if ((x & (1 << i)) != 0) { // Check if the i-th bit is set
            cout << i << " ";     // Print the position of the 1-bit
        }
    }
    cout << endl;

    return 0;
}


/*


### Explanation:
1. **Input**: A number \( x \) is taken from the user.
2. **Bitwise Check**:
   - The loop iterates from \( i = 0 \) to \( i = 29 \) (covers all possible bit positions for integers up to \( 10^9 \)).
   - \( (1 << i) \): Left shifts `1` by \( i \) positions, creating a binary number with only the \( i \)-th bit set (e.g., \( 1 << 0 = 1 \), \( 1 << 1 = 2 \), \( 1 << 2 = 4 \), etc.).
   - \( x & (1 << i) \): Performs a bitwise AND to check if the \( i \)-th bit of \( x \) is set.
     - If it is set, the result is non-zero.
     - If it is not set, the result is zero.
3. **Output**:
   - The indices of all `1` bits in the binary representation of \( x \) are printed.

---

### Example Run:
#### Input:
```
Enter a number (x): 53
```

#### Execution:
- Binary representation of \( 53 \): \( 110101 \).
- \( i = 0 \): \( 53 & (1 << 0) = 53 & 1 = 1 \) → Print \( 0 \).
- \( i = 1 \): \( 53 & (1 << 1) = 53 & 2 = 0 \) → Skip.
- \( i = 2 \): \( 53 & (1 << 2) = 53 & 4 = 4 \) → Print \( 2 \).
- \( i = 3 \): \( 53 & (1 << 3) = 53 & 8 = 0 \) → Skip.
- \( i = 4 \): \( 53 & (1 << 4) = 53 & 16 = 16 \) → Print \( 4 \).
- \( i = 5 \): \( 53 & (1 << 5) = 53 & 32 = 32 \) → Print \( 5 \).

#### Output:
```
Positions of 1-bits in the binary representation of 53: 0 2 4 5
This code is efficient for numbers up to \( 10^9 \) as it only loops over the relevant bits.
*/