#include<stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num < 0){
        printf("Number cant be negetive");
        return 0;
    }

    for(int i = 2;i<num;i++){
        if(num % i == 0){
            printf("It is not prime.");
            return 0;
        }
    }

    printf("it is prime");
}