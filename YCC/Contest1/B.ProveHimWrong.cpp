// /298103033

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(pow(3,n-1)>1e9){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            vector<long long > res;
            for(int i=0; i<n; i++){
                res.push_back(pow(3,i));
            }
            for(size_t i=0; i<res.size(); i++){
                cout<<res[i]<<" ";
            }
        }
    }
    return 0;
}
