//armstrong number
#include<stdio.h>
int main(){
int a,b,c,x,n=0,i,y=1,z=0;
scanf("%d",&a);
c=a;
b=a;
while(b!=0){
    b/=10;
    n++;
}
while(a!=0){
    x=a%10;
    for(i=1;i<=n;i++)
        y=y*x;
    z+=y;
    a/=10;
    y=1;
}
if(z==c)
    printf("Armstrong num");
else
    printf("Not Armstrong num");
}
