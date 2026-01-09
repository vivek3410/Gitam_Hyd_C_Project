#include<stdio.h>

// Protyping/signutare
void menu();
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);


int main(){
    double num1,num2;
    char op;

    menu();

    printf("Enter two operands: ");
    scanf("%lf%lf",&num1,&num2);

    double result;

    printf("Enter the operator: ");
    scanf(" %c",&op);
    switch(op){
        case '+':
            result = add(num1,num2);
            break;
        case '-':
            result = sub(num1,num2);
            break;

        case '*':
            result = mul(num1,num2);
            break;

        case '/':
            result = div(num1,num2);
            break;

        default:
            printf("Invalid operation\n");
            break;
    }

    printf("result: %.4lf\n",result);
    return 0;
}


void menu(){
    printf("====== Menu ======\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");
}

int add(int a,int b){
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int mul(int a,int b){
    return a * b;
}

int div(int a,int b){
    if(b == 0){
        printf("Cant be divided by 0");
        return -1;
    }
    return a / b;
}