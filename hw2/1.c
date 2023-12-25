#include<stdio.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int guess,number;
    char isContinue='y';
    while(isContinue=='y'){
        isContinue='n';
        number=rand()%1000+1;
        printf("number:",number,"\n");
        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");

        do{
            scanf("%d",&guess);
            if(guess<number) printf("Too low. Try again.\n");
            else if(guess>number) printf("Too high. Try again.\n");
            else printf("Excellent! You guessed the number!\n");
        }while(guess!=number);

        printf("Would you like to play again (y or n)?\n");

        while(1){
            scanf(" %c",&isContinue);
            if(isContinue!='y'&&isContinue!='n'){
                printf("Invalid input, please type again\n");
            }
            else break;
        }
    }
}
