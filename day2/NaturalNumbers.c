#include<stdio.h>

int main(){

    int N;

    printf("Enter the number: ");
    scanf("%d",&N);
    int i = 1;
    // for(i;i<=N;i++){
    //     printf("%d\n",i);
    // }

    while(i <= N){
        printf("%d ",i);
        i++;
    }

    printf("\n");
}