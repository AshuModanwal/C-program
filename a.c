#include <stdio.h>
#include <math.h>
float grossSalery(float BS);
int main()
{
    float BS, GS;
    printf("Enter Ramesh's basic salery: ");
    scanf("%f", &BS);
    GS = grossSalery(BS);
    printf("ramesh's gross salery is : %f ", GS);
    return 0;
}
float grossSalery(float BS)
{
    float DA, HR, GS;
    DA = BS * 0.4;
    HR = BS * 0.2;
    GS = BS - (DA + HR);
    return GS;
}