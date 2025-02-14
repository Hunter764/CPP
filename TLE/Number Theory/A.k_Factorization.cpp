#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;    //to store prime factors
    for(int i=2;i*i<=n;i++){
        while(n%i ==0 ){
            n /=i;
            v.push_back(i);
        }
    }
    if(n>1){
        v.push_back(n);
    }
    if(v.size()<k){    //not possible to get k numbers
        cout<<-1<<endl;
    }
    else{
        int last =1;         //calculating the last number
        for(int i = k-1 ;i<v.size(); i++){
            last *= v[i];
        }
        for(int i=0; i<k-1; i++){
            cout<<v[i]<<" ";
        }
        cout<<last<<endl;
    }
    return 0;
}