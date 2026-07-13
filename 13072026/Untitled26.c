#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter Character:");
scanf("%c",&a);
if(isalpha(a)){
    if(isupper(a))
        printf("%c is uppercase",a);
    else
        printf("%c is lowercase",a);
}
}
