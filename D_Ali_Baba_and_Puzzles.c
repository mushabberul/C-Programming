#include<stdio.h>
int main(){
    
   long long int a,b,c,result;
   
    scanf("%lld %lld %lld %lld",&a,&b,&c,&result);


    if((a+b-c) == result){
        printf("%s","YES");
    }else if((a+b*c) == result){
        printf("%s","YES");
    }else if((a-b+c) == result){
        printf("%s","YES");
    }else if((a-(b*c)) == result){
        printf("%s","YES");
    }else if(((a*b)+c) == result){
        printf("%s","YES");
    }else if(((a*b)-c) == result){
        printf("%s","YES");
    }else{
        printf("%s","NO");
    }
    return 0;
}