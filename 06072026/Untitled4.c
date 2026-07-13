#include<stdio.h>
int main(){
int a;
char *x;
printf("Enter a numbers:");
scanf("%d",&a);
x=(a%5==0 && a%7==0) ? "Divisible by both" :(a%5==0 ? "Divisible by 5": (a%7==0 ? "Divisible by 7": "Not Divisible by both") );
printf("%s",x);
}

