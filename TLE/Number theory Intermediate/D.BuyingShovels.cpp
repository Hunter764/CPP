#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;


        int maxPackageSize = -1;

        for(int i=1; i*i<=n; i++)
        {
            if(n%i == 0){
                int packageSize1 = i;
                int packageSize2 =n/i;


                if(packageSize1 <= k){
                    maxPackageSize = max(maxPackageSize, packageSize1);
                }

                if(packageSize2 <= k){
                    maxPackageSize = max(maxPackageSize, packageSize2);
                }
            }

        }
        int count = n/maxPackageSize;
        cout<<count<<endl;
    }
    return 0;
}