#include<stdio.h>
int main(){
int n,i,x=0;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    x=x+i;
}
printf("%d \n",x);
}
