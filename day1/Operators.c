#include<stdio.h>

int main(){

    // Arthemtic Operators
    int a = 10, b = 20;
    printf("===== Arthmetic operators: ===== \n");
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("===== Arthmetic operators End ===== \n");


    // Ternary Operator
    int age;
    printf("===== Ternary operator ===== \n");
    printf("Enter your age: ");
    scanf("%d",&age);

    age > 18 ? printf("Elgible to vote\n") : printf("Not elgible\n");

    printf("===== Ternary operators End ===== \n");

    // Relational Operator
    printf("===== Relational operators ===== \n");

    printf("%d\n",age > 0 && age > 18);

    printf("===== Relational operators End ===== \n");


    // Conditional Operator

    printf("===== conditonal operators ===== \n");

    printf("%d\n", 5 > 10);

    printf("===== conditonal operators End ===== \n");


    // Bitwise Operator

    printf("===== Bitwise operators ===== \n");

    printf("%d\n",6 >> 1);

    printf("===== Bitwise operators End ===== \n");

}