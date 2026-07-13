#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter Character:");
scanf("%c",&a);
if(isalpha(a))
    printf("%c is a character");
else
    printf("%c is not a character");
}
