//number in reverse num
#include<stdio.h>
int main(){
int a=0,i,b=1,n,c=0;
scanf("%d",&n);
while(n!=0){
    a=n%10;
    n/=10;
    printf("%d",a);
}
}
