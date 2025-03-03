#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    int mini =*min_element(v.begin(), v.end());
    multiset<int> st;

    for(int i=0; i<n; i++){
        if(v[i]%mini ==0){
            st.insert(v[i]);
        }
    }


    //if element is swapable take the topmost elem and rearange the array
    for(int i=0; i<n; i++){
        if(v[i]%mini == 0){
            int temp =*st.begin();
            v[i]=temp;
            st.erase(st.find(temp));
        }
    }

    for(int i=1;i <n; i++){
        if(v[i]<v[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}