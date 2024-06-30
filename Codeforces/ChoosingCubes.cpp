#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin >> n >> f >> k;

        vector <int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        int fav_value = a[f-1];  //intialising the value of fav cube
        
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end()); //sorting in  descending order

        int greater_count = 0;
        int equal_count = 0;
 
        for(int i=0; i<n; i++){    //counting
            if(a[i] > fav_value){
                greater_count++;
            }
            else if(a[i] == fav_value){
                equal_count++;
            }
        }

        if(greater_count >= k ){
            cout<<"NO"<<endl;
        }
        else if(greater_count + equal_count > k){
            cout <<"Maybe"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


    }
}