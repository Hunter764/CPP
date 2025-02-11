#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> prime_factor;
    for(int i=2; i*i <= n; i++){
        if(n%i ==0){
            while(n%i ==0){
                n/=i;
                prime_factor.push_back(i);
            }
        }
    }
    if(n>1){
        prime_factor.push_back(n);
    }

    sort(prime_factor.begin(), prime_factor.end());

    cout<<"The prime factors are: ";
    for(int fact : prime_factor){
        cout<<fact<<" ";
    }
}

// 36
// The prime factors are: 2 2 3 3 