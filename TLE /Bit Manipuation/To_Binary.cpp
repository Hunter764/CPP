#include<bits/stdc++.h>
using namespace std;

string to_binary(int x){
    string s;
    while(x>0){
        s += (x%2 ? '1' : '0');   //Determining least significant bit && appending  `'1'` for a `1` bit or `'0'` for a `0` bit to the string `s`.
        x /= 2;  // Divide `x` by 2 to shift to the next bit.
    }
    reverse(s.begin(),s.end());
    return s;

}

int main(){
    cout<< "14= " << to_binary(14) <<endl;   //1110

    int x= 53;
    int y =48;

    cout<<" x = "<<to_binary(x) << ", y = "<<to_binary(y)<<endl;

    cout<<"AND,OR,XOR: "<<endl;
    cout<<to_binary(x & y) <<" "<< to_binary(x|y)<<" "<<to_binary(x^y)<<endl;

    
}



/*


---

### Code Overview
This program:
1. Converts integers into binary strings using the `to_binary` function.
2. Demonstrates bitwise operations (AND, OR, XOR) on two integers and prints their binary representations.

---

### Function: `to_binary(int x)`
#### Logic:
1. **Input**: An integer `x`.
2. **Process**:
   - While `x > 0`, determine the least significant bit (`x % 2`).
   - Append `'1'` for a `1` bit or `'0'` for a `0` bit to the string `s`.
   - Divide `x` by 2 to shift to the next bit.
3. Reverse the string `s` to correct the order (as binary is constructed from the least significant bit upwards).
4. **Output**: Binary representation of `x` as a string.

---

### Main Function Dry Run:
#### 1. First Output
```cpp
cout << "14= " << to_binary(14) << endl;
```
- Call `to_binary(14)`:
  - 14 → `14 % 2 = 0` → `s = "0"`
  - 7 → `7 % 2 = 1` → `s = "01"`
  - 3 → `3 % 2 = 1` → `s = "011"`
  - 1 → `1 % 2 = 1` → `s = "0111"`
  - Reverse `s`: `"1110"`
- Output: `14 = 1110`.

#### 2. Variables `x` and `y`
```cpp
int x = 53; // Binary: 110101
int y = 48; // Binary: 110000
```
```cpp
cout << "x = " << to_binary(x) << ", y = " << to_binary(y) << endl;
```
- Call `to_binary(53)`:
  - 53 → `1` → `s = "1"`
  - 26 → `0` → `s = "10"`
  - 13 → `1` → `s = "101"`
  - 6 → `0` → `s = "1010"`
  - 3 → `1` → `s = "10101"`
  - 1 → `1` → `s = "101011"`
  - Reverse `s`: `"110101"`
- Call `to_binary(48)`:
  - 48 → `0` → `s = "0"`
  - 24 → `0` → `s = "00"`
  - 12 → `0` → `s = "000"`
  - 6 → `0` → `s = "0000"`
  - 3 → `1` → `s = "00001"`
  - 1 → `1` → `s = "000011"`
  - Reverse `s`: `"110000"`
- Output: `x = 110101, y = 110000`.

#### 3. Bitwise Operations
```cpp
cout << "AND,OR,XOR: " << endl;
cout << to_binary(x & y) << " " << to_binary(x | y) << " " << to_binary(x ^ y) << endl;
```
- **`x & y` (AND)**:
  - 110101  
  - 110000  
  - ------
  - 110000 (Decimal: 48)
  - Output: `110000`.
- **`x | y` (OR)**:
  - 110101  
  - 110000  
  - ------
  - 110101 (Decimal: 53)
  - Output: `110101`.
- **`x ^ y` (XOR)**:
  - 110101  
  - 110000  
  - ------
  - 000101 (Decimal: 5)
  - Output: `101`.

#### Final Output:
```
14 = 1110
x = 110101, y = 110000
AND, OR, XOR:
110000 110101 101
```

---

### Key Points:
- **Bitwise Operators**:
  - AND (`&`): Bit is 1 if both bits are 1.
  - OR (`|`): Bit is 1 if either bit is 1.
  - XOR (`^`): Bit is 1 if the bits are different.
- **Binary Conversion**: `to_binary` builds the binary string by iterating through each bit from least to most significant.


T.C   O(log 2(n))  where n is the maximum integer value processed by to_binary.



*/