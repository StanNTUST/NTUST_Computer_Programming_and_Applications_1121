#include<stdio.h>
#include<string.h>
#include <ctype.h>

int isPalindrome(char text[],int start,int end);

int number;

int main(){
    char text[200];
    printf("Please input the text:");
    gets(text);
    int length=strlen(text);
    if(isPalindrome(text,0,length-1)) printf("%s is palindrome",text);
    else printf("%s is not palindrome",text);
}
int isPalindrome(char text[],int start,int end){
    while (start < end && (isspace(text[start])||text[start]=='.'||text[start]==',')) start++;
    while (start < end && (isspace(text[end])||text[end]=='.'||text[end]==',')) end--;

    if(start>=end) return 1;

    if(text[start]!=text[end]) return 0;

    return isPalindrome(text,start+1,end-1);

}
