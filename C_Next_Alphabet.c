#include<stdio.h>
int main(){

    char a;
    scanf("%c",&a);

    if('z'==a){
        printf("%c",'a');
    }else{
        printf("%c",a+1);
    }
    return 0;
}