#include<stdio.h>
int main(){
    int n,m;
    printf("Enter m and n:");
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        if(m>=1&&n<=10)
         printf("%02d ",i);
        else if (m>=10&&n<=999)
            printf("%03d ",i);
        else
            printf("%03d ",i);

        }
        
    }
