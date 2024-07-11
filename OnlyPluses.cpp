#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int maximumProduct = 0;

        for(int i=0;i<=5;i++){
            for(int j=0;j<=5-i;j++){
                int d = 5 -i-j;
                int x = a + i;
                int y = b + j;
                int z = c + d;
                maximumProduct = max(maximumProduct,x*y*z);
            }
        }
        cout<<maximumProduct<<endl;
    }
    return 0;
}