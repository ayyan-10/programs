#include<stdio.h>
int main(){
int i,j,n,k,l;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(k=i;k<=n;k++)
        printf("  ");
    for(j=1;j<=i;j++)
        printf("%d ",j);
    for(l=i-1;l>=1;l--)
            printf("%d ",l);
    printf("\n");
}
for(i=n;i>0;i--){
    for(k=i-1;k<=n;k++)
        printf("  ");
    for(j=1;j<i;j++)
        printf("%d ",j);
    for(l=i-2;l>=1;l--)
            printf("%d ",l);
    printf("\n");
}
}
