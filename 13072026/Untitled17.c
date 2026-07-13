#include<stdio.h>
int main(){
int i=1,n;
printf("Enter n:");
scanf("%d",&n);
print:
    printf("%d \n",i);
    i+=2;
if(i<=n)
    goto print;
}

