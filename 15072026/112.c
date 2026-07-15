#include<stdio.h>
int main(){
int i,j,n,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=5 ;j>=i;j--)
        printf("%d ",j);
    for(k=i;k<n;k++)
        printf("  ");
    printf("\n");
}
}
