#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int evenCount = 0;
    int oddCount = 0;

    // Counting even and odd numbers
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output based on counts
    if (evenCount == 1)
        for (int i = 0; i < n; ++i)
            if (n[i] % 2 == 0)
                std::cout << i+1 << std::endl;
    
    if (oddCount == 1)
        for (int i = 0; i < n; ++i)
            if (n[i] % 2 != 0)
                std::cout << i+1 << std::endl;

    return 0;
}
