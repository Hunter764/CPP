#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size = 2 * n;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if (((i / 2) % 2 == 0 && (j / 2) % 2 == 0) || ((i / 2) % 2 == 1 && (j / 2) % 2 == 1)) {
                    cout <<'#';
                }
                else{
                    cout<<'.';
                }
            }
            cout<<'\n';
        }
        
    }
    return 0;
}