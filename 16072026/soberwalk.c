#include <stdio.h>
int main(){
    int n,x=0,y=0,d=10;
    char dir='R';
    printf("Enter n:");
    scanf("%d",&n);
    if(n<1){
        printf("X:%d, Y:%d",x,y);
        return 0;
    }
    while(n>0){
            switch (dir)
            {
            case 'R':
                x+=d;
                dir='U';
                break;
            case 'U':
                y+=d;
                dir='L';
                break;
            case 'L':
                x-=d;
                dir='D';
                break;
            case 'D':
                y-=d;
                dir='A';
                break;
            case 'A':
                x+=d;
                dir='R';
                break;
            default:
                break;
            }
            d+=10;
            n--;
        }
        printf("X:%d, Y:%d",x,y);
}