#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l = a[0] , r = a[0];
        bool bad = false;

        for(int i=1; i<n; i++){
            if(a[i] == l-1){
                l--;
            } 
            else if(a[i] == r+1){
                r++;
            }
            else {
                bad = true;
                break;
            }
            
        }
        cout<<(bad?"No":"Yes")<<endl;
       
    }
    return 0;
    
}