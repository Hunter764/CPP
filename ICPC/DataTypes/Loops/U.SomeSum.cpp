#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int total_sum = 0;

    for (int i = 1; i <= N; i++) {
        int digit_sum = sum_of_digits(i);

        if (digit_sum >= A && digit_sum <= B) {
            total_sum += i;
        }
    }

    cout << total_sum << endl;

    return 0;
}
