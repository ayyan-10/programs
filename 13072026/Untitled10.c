#include<stdio.h>
int main(){
int a,l,b,h,x,y,ar,areaa;
float area,ae,r;
printf("1-Area of Square \n 2-Area of Triangle \n 3-Area of Circle \n 4-Area of Rectangle \n");
printf("Enter a number:");
scanf("%d",&a);
switch(a){
case 1:
    printf("Enter the Length:");
    scanf("%d",&l);
    ar=l*l;
    printf("Area of Square=%d",ar);
    break;
case 2:
    printf("Enter b and h:");
    scanf("%d %d",&b,&h);
    ae=0.5*b*h;
    printf("Area of Triangle=%f",ae);
    break;
case 3:
    printf("Enter r:");
    scanf("%f",&r);
    area=3.14f*(r*r);
    printf("Area of Circle=%f",area);
    break;
case 4:
    printf("Enter x and y:");
    scanf("%d %d",&x,&y);
    areaa=x*y;
    printf("Area of Rectangle=%d",areaa);
    break;
default:
    printf("Enter the correct choice");
}
}
