#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2){
        if(i==6)
            continue;
        printf("%d  ",i);
    }
}