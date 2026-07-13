#include<stdio.h>
int main(){
int i=1,n,sum=0;
printf("Enter n:");
scanf("%d",&n);
print:
    sum+=i;
    i++;
if(i<=n)
    goto print;
    printf("%d",sum);
}

