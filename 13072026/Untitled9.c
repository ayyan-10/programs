#include<stdio.h>
int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
switch(a%7){
case 0:
    printf("Divisible by 7");
    break;
default:
    printf("Not divisible by 7");
}
}
