//sum of series 1+1/2+..
#include<stdio.h>
int main(){
float n,i,x,sum=0;
printf("Enter n:");
scanf("%f",&n);
for(i=1;i<=n;i++){
    sum=sum+(1/i);
}
printf("%f",sum);
}
