//sum of series[9+99+999+...]
#include<stdio.h>
int main(){
int n,i,x,p=1,sum=0,f=0;
printf("Enter n:");
scanf("%d",&n);
printf("Enter x:");
scanf("%d",&x);
for(i=0;i<x;i++){
    sum=sum+(n*p);
    p=p*10;
    f+=sum;
}
printf("%d",f);
}

