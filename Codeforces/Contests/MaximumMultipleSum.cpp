#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        int maxsum =0;
        int target_x=0;
        for(int x=2; x<=n; x++){
            int sum = 0;
            int k=1;
            while( k* x <=n){
                sum += k* x;
                k++;
            }
            if(sum > maxsum){
                maxsum = sum;
                target_x = x;
            }
        }
        cout<< target_x <<endl;
    }
    return 0;
}