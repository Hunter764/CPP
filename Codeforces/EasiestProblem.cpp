#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int x = n + 1; 
    while (x % k != 0) {
        x++;
    }
    
    cout << x << endl;
    return 0;
}
