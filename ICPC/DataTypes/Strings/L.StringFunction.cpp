#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;

    while(q--){
        string query;
        cin>>query;

        if(query =="pop_back"){
            s.pop_back();
        }
        else if(query == "front"){
            cout<<s[0]<<endl;
        }
        else if(query == "back"){
            cout<<s[s.size()-1]<<endl;
        }
        else if(query =="sort"){
            int l,r;
            cin>>l>>r;
            sort(s.begin() + l-1 ,s.begin() + r);
        }
        else if(query =="reverse"){
            int l,r;
            cin>>l>>r;
            reverse(s.begin() + l-1 ,s.begin() + r);
        }
        else if(query =="print"){
            int pos;
            cin>>pos;
            cout<<s[pos-1]<<endl;
        }
        else if(query == "substr"){
            int l,r;
            cin>>l>>r;
            cout<<s.substr(l-1,r-l+1)<<endl;  //b - a + 1
        }
        else if(query =="push_back"){
            char c;
            cin>>c;
            s.push_back(c);
        }
    }
    return 0;
}