#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        string s;
        cin >> s; // Input string
        string target = "codeforces"; // The desired string
        int count = 0; // Initialize the count of differing characters
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != target[i]) {
                count++;
            }
        }
        cout << count << endl; // Output the count
    }
    return 0;
}
