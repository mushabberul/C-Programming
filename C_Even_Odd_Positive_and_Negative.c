#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int even=0,odd=0,pos=0,neg=0;

    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1; i<=n; i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        if(arr[i]%2 !=0){
            odd=odd+1;
        }
        if(arr[i]>0){
            pos = pos+1;
        }
        if(arr[i]<0){
            neg=neg+1;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    return 0;
}