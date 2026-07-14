//Write a C program to find the Armstrong number for a given range of number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,temp,dig=0,arm=0,j,x,count=0;
    printf("Enter the range:");
    scanf("%d",&b);

    for(int i=1;i<=b;i++)
    {
        count=0;
        arm=0;
        temp=i;
        dig=0;
        while(temp>0)
        {
            temp=temp/10;
            count++;
        }
        temp=i;
        while(temp>0)
        {
            dig=temp%10;
            x=1;
            for(j=1;j<=count;j++)
            {
                x=x*dig;
            }
            arm=arm+x;
            temp =temp/10;
        }
        if(arm==i)
        {
            printf("%d ",i);
        }
    }
}
