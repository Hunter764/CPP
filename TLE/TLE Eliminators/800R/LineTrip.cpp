#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x;
        cin>> n >> x;
        //input for gas station
        vector<int> a(n);
        for(int i =0; i<n; i++){
            cin >> a[i]; 
        }

        int ans = 0;
        int last = 0;

        for(int i=0; i<n; i++){
            ans = max(ans,a[i] - last );
            last = a[i];
        }

        ans = max(ans,2*(x-a[n-1]));
        cout<< ans << endl;


    }
    return 0;
}