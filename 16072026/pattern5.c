#include <stdio.h>
int main(){
    int n,p=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
}