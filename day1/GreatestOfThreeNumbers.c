#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter three values: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && a > c){
        printf("a is Greater");
    }else if(b > a && b > c){
        printf("b is greater");
    }else{
        printf("c is greater");
    }

}