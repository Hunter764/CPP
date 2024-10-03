#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
   
    long long product = (a % 100) * (b % 100) % 100;
    product = (product * (c % 100)) % 100;
    product = (product * (d % 100)) % 100;
    if (product < 10) {
        cout << "0" << product << endl;  
    } else {
        cout << product << endl;          
    }

    return 0;
}
