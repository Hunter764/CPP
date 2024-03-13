/*Find the minimum element in unsorted array and swap
it with element in the begining*/
//12,45,23,51,19,8
//8,12,19,23,45,51
 
 #include<iostream>
 using namespace std;

 int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

 }