#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int a = (x1+ x2+ x3) - max({x1,x2,x3}) - min({x1,x2,x3});
        cout<< abs(x1 - a) + abs(x2 - a) + abs(x3 - a) <<endl;
    }
    return 0;
}