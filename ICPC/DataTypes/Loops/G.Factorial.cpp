#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long  fac = 1;
        for(int i=2; i<=n ;i++){
            fac *=i;
        }
        cout<<fac<<endl;
    }
    return 0;
}