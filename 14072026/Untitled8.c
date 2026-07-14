#include<stdio.h>
int main(){
int n,i,x,p=1;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    p=p*n;
    printf("%d \n",p);
}
}
