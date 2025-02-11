#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>factor;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            factor.push_back(i);
        }
    }
    cout<<factor.size()<<endl;
    return 0;
}

// 12=>6factors