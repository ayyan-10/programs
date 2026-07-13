#include<stdio.h>
int main(){
int a,b,c,x;
printf("Enter a number for a,b,c:");
scanf("%d %d %d",&a,&b,&c);
switch(x=(a>b && a>c)? 1 : (b>a && b>c) ? 2 : (a==b && b==c) ? 4 : 3){
case 1:
    printf("A is greater");
    break;
case 2:
    printf("B is greater");
    break;
case 3:
    printf("C is greater");
    break;
default:
    printf("All are Equal");
}
}
