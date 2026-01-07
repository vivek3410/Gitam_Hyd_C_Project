#include<stdio.h>

int main(){

    int N;

    printf("Enter the number: ");
    scanf("%d",&N);
    int sum = 0;
    for(int i = 1;i<=N;i++){
        sum = sum + i;
    }

    printf("The sum of natural Number: %d\n",sum);
}