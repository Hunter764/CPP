#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        vector<int> v(32);
        //binary representation

        for(int i =29; i>=0; i--){   //as 1<=n<=32 and 1<=x<2^32
            v[i] = (x >= (1<<i));  //if the value is more than the current bit value
            x %= (1<<i);
        }
        //trying to break the blocks from Least significant bit
        for(int i=0, j; i<32;){
            
            if(!v[i]){    //if current bit is zero do nothing
                i++;
                continue;
            }
            //trying to get the block size
            j=i+1;
            while(v[j])
            {
                v[j] = 0;
                j++;
            }
            if(j > i+1)
            {
                v[j] = 1;
                v[i] =-1;
            }

            i = j;
        }
        cout<<32<<"\n";
        for(auto e:v)
            cout<<e<<" ";
        cout<<"\n";    
    }
}