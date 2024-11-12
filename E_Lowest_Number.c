#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    int max = INT_MAX;
    int a=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1; i<=n; i++){
        if(arr[i]<max){
            max=arr[i];
            a=i;
        }
    }
    printf("%d %d",max,a);

    return 0;
}