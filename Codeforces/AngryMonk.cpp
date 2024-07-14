#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> vec(k);
        for(int i=0; i<k; i++){
            cin>>vec[i];
        }
        
        sort(vec.begin(), vec.end());
        
        long long out = 0;
        for(int i=0; i<k-1;i++){
            out += 2*vec[i] -1;
        }
        cout << out<<endl;
    }
    return 0;
}