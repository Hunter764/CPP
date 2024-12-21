// finding the positions of 1 bits in the binary representation of a number  x.
//optimised approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; // Input number
    cout << "Enter a number (x): ";
    cin >> x;

    cout << "Positions of 1-bits in the binary representation of " << x << ": ";

    // Loop while (1 << i) is less than or equal to x
    for (int i = 0; (1 << i) <= x; i++) {
        if (x & (1 << i)) { // Check if the i-th bit is set
            cout << i << " "; // Print the position of the 1-bit
        }
    }
    cout << endl;

    return 0;
}


// Enter a number (x): 13
// Positions of 1-bits in the binary representation of 13: 0 2 3 




/*



---

### Explanation of Improvements:
1. **Stop Early**:
   - The condition \( (1 << i) \leq x \) ensures the loop only runs for bits relevant to the number \( x \).
   - If \( (1 << i) > x \), higher bits cannot be set, so the loop terminates early.

2. **Simplified Condition**:
   - \( if (x & (1 << i)) \) replaces \( if ((x & (1 << i)) != 0) \).
   - This leverages the fact that any non-zero value in C++ evaluates to `true`.

3. **Efficiency**:
   - For large values of \( x \), the loop runs only up to the highest set bit position, avoiding up to 30 iterations for small numbers.

---

### Example Run:
#### Input:
```
Enter a number (x): 53
```

#### Execution:
- \( x = 53 \), Binary representation: \( 110101 \).
- \( i = 0 \): \( (1 << 0) = 1 \), \( 53 & 1 = 1 \) → Print \( 0 \).
- \( i = 1 \): \( (1 << 1) = 2 \), \( 53 & 2 = 0 \) → Skip.
- \( i = 2 \): \( (1 << 2) = 4 \), \( 53 & 4 = 4 \) → Print \( 2 \).
- \( i = 3 \): \( (1 << 3) = 8 \), \( 53 & 8 = 0 \) → Skip.
- \( i = 4 \): \( (1 << 4) = 16 \), \( 53 & 16 = 16 \) → Print \( 4 \).
- \( i = 5 \): \( (1 << 5) = 32 \), \( 53 & 32 = 32 \) → Print \( 5 \).
- \( i = 6 \): \( (1 << 6) = 64 \), \( 64 > 53 \), loop terminates.

#### Output:
```
Positions of 1-bits in the binary representation of 53: 0 2 4 5
```

---

### Complexity Analysis:
- **Time Complexity**:
  - The loop runs only up to the position of the highest set bit in \( x \), which is \( \lfloor \log_2(x) \rfloor + 1 \).
  - Hence, the time complexity is \( O(\log_2(x)) \).
  
- **Space Complexity**:
  - No extra space is used beyond the loop counter and variables, so the space complexity is \( O(1) \).

---

This version is more efficient and cleaner while maintaining the same functionality. It is ideal for scenarios where \( x \) is large or when performance is critical.
*/