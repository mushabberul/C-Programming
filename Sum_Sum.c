#include<stdio.h>
int main(){
    int n,sum=0,sub=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=n; i++){
        if(arr[i]>0){
            sum+=arr[i];
        }else{
            sub+=arr[i];
        }
    }
    printf("%d %d",sum,sub);
    return 0;
}