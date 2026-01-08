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

                printf("Enter the element at postion %d, %d",(i+1),(j+1));
                scanf("%d",&arr[i][j]);
            }
        }

        for(int i = 0;i<row;i++){
            printf("%d ",arr[i][i]);
        }

        printf("\n");

        // for(int i = 0;i<row;i++){
        //     for(int j = 0;j<col;j++){
        //         printf("%d ",arr[i][j]);
        //     }
        //     printf("\n");
        // }
    }else{
        printf("please nxn size");
    }
}