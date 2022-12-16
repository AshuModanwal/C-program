#include <stdio.h>
#include <math.h>
int main()
{
    // program to find area and perimeter of the rcrtangle
    int Len, Bre, P;
    float Ar;
    printf("Enter the value of Length and Breadth of Rectangle : ");
    scanf("%d %d", &Len, &Bre);
    P = 2 * (Len + Bre);
    Ar = Len * Bre;

    printf("\nThe value of Perimeter of Rectangle is : %d", P);
    printf("\nThe Area of Rectangle is : %f", Ar);

    // program for finding area and circumference of Circle
    float rad, area, circum;
    printf("\nEnter the value of radius is : ");
    scanf("%f", &rad);

    area = 3.14 * rad * rad;
    circum = 3.14 * 2 * rad;
    printf("T\nhe value of area of Circle is : %f", area);
    printf("\nThe value of Circumference of Circle is : %f", circum);
    return 0;
}