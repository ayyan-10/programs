#include<stdio.h>
enum day{
MON=10,TUE,WED,THU,FRI,SAT,SUN
};
int main(){
int a;
printf("Enter a number(10-16):");
scanf("%d",&a);
enum day today=(enum day)a;
switch(today){
case 10:
    printf("Monday");
    break;
case 11:
    printf("Tuesday");
    break;
case 12:
    printf("Wednesday");
    break;
case 13:
    printf("Thursday");
    break;
case 14:
    printf("Friday");
    break;
case 15:
    printf("Saturday");
    break;
case 16:
    printf("Sunday");
    break;
default:
    printf("Invalid Choice");
}
}
