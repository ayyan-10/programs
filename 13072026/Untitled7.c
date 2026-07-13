#include<stdio.h>
int main(){
char c;
printf("Enter a char:");
scanf("%c",&c);
switch(c){
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
    printf("Vowels");
    break;
default:
    printf("Consonent");
}
}
