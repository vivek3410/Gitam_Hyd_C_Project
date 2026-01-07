#include<stdio.h>

int main(){

    int N;

    printf("Enter the number: ");
    scanf("%d",&N);

    int evenSum = 0;

    for(int i = 1;i<=N;i++){
        if(i % 2 == 0){
            evenSum = evenSum + i;
        }
    }

    printf("sum of even numbers: %d\n",evenSum);
}