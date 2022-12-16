#include <stdio.h>
#include <math.h>
int main()
{
    int i, w = 841, h = 1189, temp;
    for (i = 0; i <= 8; i++)
    {
        printf("Dimention of A%d is : %d X %d\n", i, h, w);
        temp = h;
        h = w;
        w = temp/2;
        }
    return 0;
}