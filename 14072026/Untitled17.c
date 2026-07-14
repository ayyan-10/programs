//prime btw range
#include<stdio.h>
int main(){
int a,i,p=0,n;
scanf("%d",&n);
for(a=2;a<=n;a++){
    p=0;
for(i=2;i<a;i++){
    if(a%i==0){
        p=1;
        break;
    }
}
if(p==0)
printf("%d ",a);
}
}
