#include<stdio.h>
int main(){
int i=1,n;
printf("Enter n:");
scanf("%d",&n);
print:
    printf("%d x %d = %d \n",n,i,n*i);
    i++;
if(i<=10)
    goto print;
}



