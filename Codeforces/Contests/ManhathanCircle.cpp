#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >>m;
        vector<string> grid(n);
        for(int i=0; i<n ; i++){
            cin >> grid[i];
        }
        int h=0, k=0;
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] =='#'){
                    h += i;
                    k += j;
                    count++;
                }
            }
        }
        if(count == 0){
            cout << "0 0" <<endl;
        }
        else{
            h = (h + count -1)/count;
            k = (k + count -1)/count;
            cout<< h + 1 << " "<<k+1<<endl;
        }
    }
    return 0;
}