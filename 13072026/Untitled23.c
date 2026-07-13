#include<stdio.h>
int main(){
int i=1,n,x,p=1;
printf("Enter n:");
scanf("%d",&n);
scanf("%d",&x);
print:
    p=p*n;
    printf("%d \n",p);
    i++;
if(i<=n)
    goto print;
}
