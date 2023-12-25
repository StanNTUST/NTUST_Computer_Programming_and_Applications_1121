#include<stdio.h>

int power(int base,int exponent);

int main(){
    int base;
    int exponent;
    printf("Please input base:");
    scanf("%d",&base);
    printf("Please input exponent:");
    scanf("%d",&exponent);
    printf("power number is %d",power(base,exponent));
}

int power(int base,int exponent){
    if(exponent<=1) return base;
    else return base*power(base,exponent-1);
}
