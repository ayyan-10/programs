#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a:");
scanf("%d",&a);
if(a>=0)
    printf("%d is positive \n",a);
else
    printf("%d is negative \n",a);


printf("Enter b:");
scanf("%d",&b);
if(b>99 && b<1000)
    printf("%d is 3 digit number \n",b);
else
    printf("%d is not 3 digit number \n",b);


printf("Enter c:");
scanf("%d",&c);
if(c%11==0 && c%32==0)
    printf("%d is divisible by both",c);
else
    printf("%d is not divisible by both",c);
}
