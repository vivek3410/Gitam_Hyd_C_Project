#include<stdio.h>

int main(){
    double num1,num2;
    char op;

    printf("====== Menu ======\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");


    printf("Enter two operands: ");
    scanf("%d%d",&num1,&num2);

    double result;

    printf("Enter the operator: ");
    scanf(" %c",&op);
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 == 0){
                printf("Cant be divided by 0");
                break;
            }
            result = num1 / num2;
            break;

        default:
            printf("Invalid operation\n");
            break;
    }

    printf("result: %.4lf\n",result);
    return 0;
}