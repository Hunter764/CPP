#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0 ;i<n;i++){
        char ch;
        cin>>ch;
        a[i] = ch -'0';

    }
    int sum =0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}