#include<stdio.h>

int main(){

    int num;

    printf("enter the number: ");
    scanf("%d",&num);

    int rev = 0;

    while(num){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("%d\n",rev);
}