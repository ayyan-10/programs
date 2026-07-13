#include<stdio.h>
int main(){
float i=1,n,x,p=1;
printf("Enter n:");
scanf("%f",&n);
scanf("%f",&x);
print:
    p=p*n;
    printf("%f \n",(1/p));
    i++;
if(i<=n)
    goto print;
}
