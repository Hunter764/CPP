//Print 

#include<bits/stdc++.h>
using namespace std;

void helper(int idx, string s, vector<string> &ans, string num){
    int n=(int)num.size();
    if(idx==n){
        ans.push_back(s);
        return;
    }
    if(num[idx] =='0'){
        return;
    }
    if(idx==n-1){ //single choice
        int temp = num[idx]-'0';   //getting the number
        s.push_back(temp+ 'a'-1);  
        helper(idx+1,s,ans,num);
        return;
    }
    //two choices
    if(idx+1 <n && num[idx+1]=='0'){
        int temp = (num[idx]-'0')*10 + (num[idx+1]-'0');
        s.push_back(temp+'a'-1);
        helper(idx+2,s,ans,num);
        return;
    }
     if(idx + 1 < n){ // Fix: Ensure idx+1 is within bounds before accessing num[idx+1]
        int temp = (num[idx] - '0') * 10 + (num[idx + 1] - '0');
        if(temp > 26){
            int g = (num[idx] - '0');
            s.push_back(g + 'a' - 1);
            helper(idx + 1, s, ans, num);
            return;
        }
        else{
            int g = (num[idx] - '0');
            s.push_back(g + 'a' - 1);
            helper(idx + 1, s, ans, num);
            s.pop_back();
            s.push_back(temp + 'a' - 1);
            helper(idx + 2, s, ans, num);
        }
    }


}

void  solve(){

    string s;
    cin>>s;
    vector<string>ans;
    helper(0,"",ans,s);
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

//output
// 1
// 1123
// aabc aaw alc kbc kw 