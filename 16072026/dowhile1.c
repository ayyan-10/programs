#include <stdio.h>
int main() {
int choice;
int side, radius, base, height, length, breadth;
float area;
do{
printf("\n1. Area of a Square\n");
printf("2. Area of a Circle\n");
printf("3. Area of a Triangle\n");
printf("4. Area of a Rectangle\n");
printf("5. Exit \n");
printf("\nChoose a number: ");
scanf("%d", &choice);

switch (choice) {
    case 1:
        printf("Enter side of the square: ");
        scanf("%d", &side);
        area = side * side;
        printf("Area of Square = %.2f", area);
        break;

    case 2:
        printf("Enter radius of the circle: ");
        scanf("%d", &radius);
        area = 3.14 * radius * radius;
        printf("Area of Circle = %.2f", area);
        break;

    case 3:
        printf("Enter base of the triangle: ");
        scanf("%d", &base);
        printf("Enter height of the triangle: ");
        scanf("%d", &height);
        area = 0.5 * base * height;
        printf("Area of Triangle = %.2f", area);
        break;

    case 4:
        printf("Enter length of the rectangle: ");
        scanf("%d", &length);
        printf("Enter breadth of the rectangle: ");
        scanf("%d", &breadth);
        area = length * breadth;
        printf("Area of Rectangle = %.2f", area);
        break;

    case 5:
        printf("Exited Successfully");
        break;
    default:
        printf("Enter a valid number");
    }
}
while(choice!=5);
    return 0;
}
