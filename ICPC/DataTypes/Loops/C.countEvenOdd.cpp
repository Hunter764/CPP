#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnte = 0, cnto = 0, cntn = 0, cntp = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cnte++;  
        } else {
            cnto++;  
        }

        if(arr[i] > 0) {
            cntp++; 
        } else if(arr[i] < 0) {
            cntn++; 
        }
    }
    cout << "Even: " << cnte << endl;
    cout << "Odd: " << cnto << endl;
    cout << "Positive: " << cntp << endl;
    cout << "Negative: " << cntn << endl;

    return 0;
}
