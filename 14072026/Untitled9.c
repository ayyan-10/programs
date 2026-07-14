#include<stdio.h>
int main(){
int n,i,x;
float p=1;
printf("Enter n:");
scanf("%d",&n);
printf("Enter x:");
scanf("%d",&x);
for(i=1;i<=n;i++){
    p=p*n;
    printf("%f \n",(1/p));
}
}
