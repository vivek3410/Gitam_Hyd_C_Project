#include<stdio.h>

int main(){

    int uc;

    printf("Enter the user choice: ");
    scanf("%d",&uc);

    switch(uc){
        case 1:
            printf("Case 1\n");
            break;

        case 2:
            printf("Case 2\n");
            break;

        case 3:
            printf("Case 3\n");
            break;
        
        default:
            printf("Invalid case\n");

    }

    return 0;

}