#include<stdio.h>
int main(){
int i=1,n,x=1;
printf("Enter n:");
scanf("%d",&n);
print:
    x*=i;
    i++;
if(i<=n)
    goto print;
    printf("%d",x);
}


