// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;

//         while(true){
//             if(c>0){
//             c--;

//         }
//         else if(a>0){
//             a--;
//         }
//         else{
//             cout<<"Second"<<endl;
//                 break;
//         }
//         if(c>0){
//             c--;
//         }
//         else if(b>0){
//             b--;
//         }
//         else{
//             cout<<"First"<<endl;
//             break;
//         }

//         }

//     }
//     return 0;
// }

//TLE for 10^9  operations



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(c%2 == 0){
            if(a>b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        else{
            if(a>=b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
    }
    return 0;
}