#include <iostream>
using namespace std;

int fib(int n) {
    // Base cases
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    // Recursive case
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int N;
    cin >> N;  
    cout << fib(N) << endl;  
    return 0;
}
