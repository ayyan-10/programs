#include<stdio.h>
int main(){
float n,i;
float sum=0;
printf("Enter n:");
scanf("%f",&n);
for(i=1;i<=n;i++){
    sum=sum+(1/(i*i));
}
printf("%f ",sum);
}
