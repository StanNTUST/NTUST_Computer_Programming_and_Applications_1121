#include<stdio.h>
int main(){
    long long number,i;
    int count=0;
    printf("Enter positive number to judge if it is prime number or not: ");
    scanf("%lld",&number);

    //only discuss half of number without 1
    for(i=2;i<=number/2;i++){
        if(number%i==0) count++;
    }
    if(number<=0) printf("%lld is not positive number",number);
    else if(count>0||number==1) printf("%lld is not prime number",number);
    else printf("%lld is prime number",number);
}
