#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int number_one = n%10;
    int number_two = n/10;
    
    if(number_one%number_two==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}