#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int ans=-1;
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    for(int i=0; i<n; i++){
        
        if(a==arr[i]){
            ans = i;
            break;
        }
    }
    printf("%d",ans);

    return 0;
}