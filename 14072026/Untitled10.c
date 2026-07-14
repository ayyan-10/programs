//sum of given digits
#include<stdio.h>
int main(){
int a,x=0;
printf("");
scanf("%d",&a);
for(;a!=0;){
    x=x+a%10;
    a=a/10;
}
printf("%d",x);
}
