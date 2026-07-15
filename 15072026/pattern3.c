#include<stdio.h>
int main(){
int i,j,n,k,l;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
        printf("%d ",j);
    for(k=n-i;k>0;k--)
        printf("  ");
    for(l=n-i;l>1;l--)
        printf("  ");
    for(int m=i;m>0;m--){
        if(m==n)
            continue;
        else
            printf("%d ",m);
    }
    printf("\n");
}
}
