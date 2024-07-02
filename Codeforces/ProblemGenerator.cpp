#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> count(7,0);
        for(int i =0; i<n; i++){
            count[s[i] - 'A']++;
        }

        int required_problems = 0;
        for(int i=0; i< 7; i++){
            if(count[i] < m){
                required_problems += (m- count[i]);
            }
        }
        cout<<required_problems<<endl;

    }
    return 0;
}

