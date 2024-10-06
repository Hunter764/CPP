#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=12;i++){
        int result = n*i;
        cout<<n<<" * "<<i<<" = "<<result<<endl;
    }
    return 0;
}