#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        for(int i=0; i<n;i ++){
            cin >>arr[i];
        }

        bool allSame = true;
        for(int i=0 ;i<n; i++){
            if(arr[i] != arr[0]){
                allSame = false;
                break;
            }
        }
        if(allSame){
            cout<<"NO"<<endl;
        }
        else{
            cout <<"Yes"<<endl;
            string coloring(n ,'B');
            coloring[0] = 'R';
            for(int i=1; i<n; i++){
                if(arr[i] != arr[0]){
                    break;
                }
                coloring[i] = 'R';
            }
            cout<< coloring <<endl;
        }
    }
    return 0;
}