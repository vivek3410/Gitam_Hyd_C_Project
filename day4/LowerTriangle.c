#include<stdio.h>


int main(){
    int arr[10][10];
    int row,col;
    printf("Enter the row: ");
    scanf("%d",&row);

    printf("Enter the col: ");
    scanf("%d",&col);

    if(row == col){
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){

                printf("Enter the element at postion %d, %d",i,j);
                scanf("%d",&arr[i][j]);
            }
        }

        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(i > j){
                    printf("%d ",arr[i][j]);
                }
            }
            printf("\n");
        }
    }
}