#include <stdio.h>
#include <math.h>
int main()
{
    int math, phy, che, hin, eng, agg;
    float per;
    printf("Enter the marks of math: ");
    scanf("%d", &math);
    printf("Enter the marks of physics: ");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &che);
    printf("Enter the marks of : hindi");
    scanf("%d", &hin);
    printf("Enter the marks of english: ");
    scanf("%d", &eng);
    agg = math + phy + che + hin + eng;
    per = agg/5;
    printf("The aggregate marks of student is : %d\n ",agg);
    printf("The percentage of marks of student is : %f ",per);
}