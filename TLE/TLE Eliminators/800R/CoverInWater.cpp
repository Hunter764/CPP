#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin >> s;

        int ans = 0;
        int x = 0;

        vector<int> cnt;
        cnt.push_back(0);

        for(int i=0;i<n;){
            if(s[i] == '#'){
                i++;
                continue;
            }
            while(i<n && s[i]=='.'){
                i++;
                x++;

            }
            cnt.push_back(x);
            x=0;
        }
        sort(cnt.begin(),cnt.end());

        if(cnt.back()<3)
            cout<<accumulate(cnt.begin(), cnt.end(),0) <<"\n";
        else
            cout<< 2 <<"\n";    
    }
    return 0;
}
