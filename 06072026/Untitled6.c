#include<stdio.h>
int main(){
int a;
printf("Enter a:");
scanf("%d",&a);
if(a<=200)
    printf("Total cost= %d",a*3);
else if(a>200 && a<=500)
    printf("Total cost= %d",a*4);
else if(a>500 && a<=1000)
    printf("Total cost= %d",a*8);
else
    printf("Total cost= %d",a*10);
}
