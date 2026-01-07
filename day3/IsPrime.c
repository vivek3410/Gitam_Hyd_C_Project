#include<stdio.h>

int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int isPrime = 1;

    if(num < 0){
        isPrime = 0;
    }

    for(int i = 2;i<num;i++){
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime){
        printf("It is Prime number");
    }else{
        printf("It is not a prime number");
    }
}