#include<stdio.h>

int main(){

    int N;

    printf("Enter the number: ");
    scanf("%d",&N);
    int fact = 1;
    for(int i = 1;i<=N;i++){
        fact = fact * i;
    }

    printf("The factorial of a number: %d\n",fact);
}