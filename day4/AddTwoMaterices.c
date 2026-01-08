#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    int arr1[100][100];
    int arr2[100][100];

    printf("Enter the row and col size for arr1: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the row and col size for arr2: ");
    scanf("%d%d",&r2,&c2);

    if(r1 == c1 && r2 == c2){
        printf("Array 1\n");
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                printf("Enter the element at pos %d,%d: ",i,j);
                scanf("%d",&arr1[i][j]);
            } 
        }

        printf("\nArray 2\n");
        for(int i = 0;i<r2;i++){
            for(int j = 0;j<c2;j++){
                printf("Enter the element at pos %d,%d: ",i,j);
                scanf("%d",&arr2[i][j]);
            }
        }

        int result[r1][c1];


        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                result[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        for(int i = 0;i<r2;i++){
            for(int j = 0;j<c2;j++){
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Please enter nxn size");
    }

    



}