#include<stdio.h>

int main(){
    int arr[10][10];
    int row,col;
    printf("Enter the row: ");
    scanf("%d",&row);

    printf("Enter the col: ");
    scanf("%d",&col);

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the element at postion %d, %d",(i+1),(j+1));
            scanf("%d",&arr[i][j]);
        }
    }

    int i = 1,j = 1;

    int offset = i * row + j;

    printf("%d\n",offset);

}