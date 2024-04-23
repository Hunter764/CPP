#include <iostream>
#include <vector>

using namespace std;

bool canFormRectangle(int a, int b) {
  // Base case: square cannot form a new rectangle
  if (a == b) {
    return false;
  }

  // Find the greatest common divisor (GCD) of a and b efficiently
  int gcd =gcd(a, b);

  // If GCD is greater than 1, a new rectangle can be formed
  return gcd > 1;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;

    if (canFormRectangle(a, b)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
