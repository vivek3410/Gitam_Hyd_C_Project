#include<stdio.h>


int main(){
    int arr[100][100];
    int row,col;
    printf("Enter the row: ");
    scanf("%d",&row);

    printf("Enter the col: ");
    scanf("%d",&col);

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the element at postion %d, %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("Sum Of all the elements: %d\n",sum);
}