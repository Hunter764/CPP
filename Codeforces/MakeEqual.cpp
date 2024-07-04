#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[200000];
    for(int i=0; i<t; i++){
        int n;
        int sum=0;
        scanf("%d",&n);
        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        for(int k=0; k<n;k++){
            if(arr[k]>=(sum/n)){
                arr[k+1]=arr[k+1]+(arr[k]-(sum/n));
                arr[k]=sum/n;             
                // 1 = 1 + (0-avg)
            }
        }
 
        int count=0;
        for(int x=0; x<n-1; x++){
            if(arr[x]==arr[x+1]){
                count++;
            }
        }
 
        if(count==n-1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
 
        }
    }
 
 
    return 0;
}