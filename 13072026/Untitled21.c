#include<stdio.h>
int main(){
int i=2,n,sum=0;
printf("Enter n:");
scanf("%d",&n);
print:
    sum=sum+i;
    i+=2;
if(i<=n)
    goto print;
    printf("Sum=%d",sum);
}


