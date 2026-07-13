#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter Character:");
scanf("%c",&a);
if(isalpha(a))
    printf("%c is a character",a);
else if(isdigit(a))
    printf("%c is a digit",a);
else
    printf("It is special character");
}
