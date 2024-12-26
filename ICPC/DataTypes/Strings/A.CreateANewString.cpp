#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    int n = s.size();
    int m = t.size();

    string y = s + " " + t;
    cout<<n<<" "<<m<<endl;
    cout<<y<<endl;
    return 0;
}