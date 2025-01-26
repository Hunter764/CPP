#include<bits/stdc++.h>
using namespace std;

int helper(int idx, int remainW, vector<int> &weight, vector<int> &value, int N){
    if(idx == N){
        return 0;
    }
    if(remainW >= weight[idx]){
        return max(helper(idx+1, remainW, weight, value, N), helper(idx+1, remainW - weight[idx],weight, value, N) + value[idx]);
    }
    else{
        return helper(idx+1, remainW, weight, value, N);
    }
}

int main(){
    int N,W;
    cin >> N >> W;
    vector<int> weight(N), value(N);
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> value[i];
    }
    int result = helper(0, W, weight, value, N);
    cout<<result<<endl;
}