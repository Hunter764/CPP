//codechef


#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<int> prefix_gcd(n),suffix_gcd(n);
    prefix_gcd[0] = v[0], suffix_gcd[n-1]=v[n-1];
    for(int i=1; i<n; i++){
        prefix_gcd[i] = __gcd(prefix_gcd[i-1],v[i]);
    }
    for(int i=n-2; i>0; i--){
        suffix_gcd[i] = __gcd(suffix_gcd[i+1],v[i]);
    }

    int ans =0;
    for(int i=1; i<n-1; i++){
        if(__gcd(prefix_gcd[i-1],suffix_gcd[i+1]) !=1){
            ans++;
        }
    }

    //checking for first element

    if(suffix_gcd[1] != 1){
        ans++;
    }

    //checking for the last element

    if(prefix_gcd[n-2] != 1){
        ans++;
    }
    cout<<ans<<endl;

}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}