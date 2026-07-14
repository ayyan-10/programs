//prime or not
#include<stdio.h>
int main(){
int a,i,p=1;
printf("");
scanf("%d",&a);
if(a <=1)
    p=0;
else{
for(i=2;i*i<=a;i++){
    if(a%i==0){
        p=0;
        break;
    }
}
}
if(p==1)
printf("%d is prime",a);
else
    printf("%d is not prime",a);
}

