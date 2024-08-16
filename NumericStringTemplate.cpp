#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;


//Approach->Process of matching a character with an integer m1[x] = c, m2[c] = x; 
//And checking if they are not matched with any other container


bool matchesTemplate(const vector<int> &a ,const string &s){
    if(a.size() != s.size()) return false;

    map<int ,char> m1;
    map<char,int> m2;

    for(size_t i=0; i<s.size();i++){
        int x = a[i];
        char c = s[i];

        if(m1.find(x) != m1.end()){
            if(m1[x] !=c) return false;
        }
        else{
            m1[x] = c;
        }
        if(m2.find(c) != m2.end()){
            if(m2[c] != x) return false;
        }
        else{
            m2[c] = x;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int m;
        cin>>m;

        while(m--){
            string s;
            cin>>s;
            if(matchesTemplate(a,s)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}