#include<stdio.h>

int main(){


    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int count = 0;

    while(num != 0){
        count++;
        num = num / 10;
    }

    printf("Number of digits: %d\n",count);
}