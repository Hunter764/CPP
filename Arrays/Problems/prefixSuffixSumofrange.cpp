/*Given an array of integers of size n. Answer q quries where you need
to print the sum of values in a given range of indices from
l to r(both included).

Note:The value of l and r in quries follow 1-based indexing.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    //calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        //ans = prefixsumarray[r] - prefixsumarray[l-1]
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}