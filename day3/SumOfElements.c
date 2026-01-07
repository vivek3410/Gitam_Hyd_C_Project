#include<stdio.h>

int main(){
    int arr[100];

    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    for(int i = 0;i<size;i++){
        printf("Enter the element at position %d",(i+1)," ");
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<size;i++){
        // sum = sum + arr[i];s
        // or
        sum += arr[i];
    }

    printf("Sum of elements: %d",sum);
}