#include<bits/stdc++.h>
using namespace std;

int main(){
    string x,y;
    cin>>x;
    cin>>y;
    int n = x.length();
    int m = y.length();

    string c = x+y;
    char temp = x[0];
    x[0] = y[0];
    y[0] = temp;

    cout<<n<<" "<<m<<endl;
    cout<<c<<endl;
    cout<<x<<" "<<y<<endl;

}