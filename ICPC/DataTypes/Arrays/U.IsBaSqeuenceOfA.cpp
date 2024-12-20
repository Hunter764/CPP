//a sub sequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(m);
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
   int i=0 , j=0; //two pointers for vector a and b
   while(i<n && j<m){
    if(a[i] == b[j]){
        j++;   //match found move pointer of b
    }
    i++; //Always move pointer for a
   }

   if(j==m){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   return 0;

}