#include<stdio.h>

int main(){

    int N;

    printf("Enter the number: ");
    scanf("%d",&N);

    int oddSum = 0;

    for(int i = 1;i<=N;i++){
        if(i % 2 != 0){
            oddSum = oddSum + i;
        }
    }

    printf("sum of odd numbers: %d\n",oddSum);
}