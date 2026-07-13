#include<stdio.h>
int main(){
int a,x;
printf("Enter a unit:");
scanf("%d",&a);
switch(x=(a<=200)? 1 : (a>200 && a<=500) ? 2 : (a>500 && a<=1000) ? 3 : 4){
case 1:
    printf("Total cost=%d",a*3);
    break;
case 2:
    printf("Total cost=%d",a*4);
    break;
case 3:
    printf("Total cost=%d",a*8);
    break;
default:
    printf("Total cost=%d",a*10);
}
}
