//sum of series
#include<stdio.h>
int main(){
int n,i,x,p=1,sum=1;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    p=p*n;
    sum+=p;
}
printf("%d",sum);
}
