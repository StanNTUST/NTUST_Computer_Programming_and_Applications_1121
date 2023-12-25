#include<stdio.h>
int main(){
    long long number,i;
    int count=0;
    printf("Enter positive number to judge if it is prime number or not: ");
    scanf("%lld",&number);

    i=2;
    //only discuss half of number without 1
    while(i<=number/2){
        if(number%i==0) count++;
        i++;
    }
    if(number<=0) printf("%lld is not positive number",number);
    else if(count>0||number==1) printf("%lld is not prime number",number);
    else printf("%lld is prime number",number);
}
