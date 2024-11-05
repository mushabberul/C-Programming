// #include<stdio.h>
// int main(){
//     int n,max=0;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=1; i<=n; i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=1; i<=n; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }

//     printf("%d",max);
//     return 0;
// }
#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,a;
    int max= INT_MIN;
    // int max=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
    }
    printf("%d",max);
    return 0;
}