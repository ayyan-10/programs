#include<stdio.h>
int main(){
int a,b,c,x,y;
printf("Enter 3 numbers:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
x=a>(y=b>c?b:c)?a:y;
printf("%d",x);
}

