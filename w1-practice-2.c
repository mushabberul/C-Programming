#include<stdio.h>
int main(){

    int number1,number2,sum,subscruction,multiaplication;
    float devision;
    scanf("%d %d",&number1,&number2);
    sum = number1 + number2;
    subscruction = number1 - number2;
    multiaplication = number1 * number2;
    devision = number1*1.0 / number2*1.0;
    printf("%d %d %d %0.2f",sum,subscruction,multiaplication,devision);
    return 0;
}