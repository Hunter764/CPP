#include <iostream>
#include <string>
using namespace std;


bool StrongPassword(const string& password) {
    string digits = "";
    string letters = "";

    for (int i = 0; i < password.length(); ++i) {
        char ch = password[i];
        if (isdigit(ch)) {
            digits += ch;
        } else if (islower(ch)) {
            letters += ch;
        }
    }

    for (int i = 1; i < digits.length(); ++i) {
        if (digits[i] < digits[i - 1]) {
            return false;
        }
    }

    for (int i = 1; i < letters.length(); ++i) {
        if (letters[i] < letters[i - 1]) {
            return false;
        }
    }

    if (!letters.empty() && !digits.empty()) {
        int x = password.find(letters[0]);
        int y = password.find(digits[0]);
        if (x < y) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string password;
        cin >> password;

        if (StrongPassword(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
