#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, sum, count = 0;
    printf("All armstring number in o to 500 is : \n");
    for (int i = 1; i <= 500; i++)
    {
        num = i;
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count) + pow((num % 100 - num % 10) / 10, count) + pow((num % 1000 - num % 100) / 100, count);
        if (sum == i)
        {
            printf("%d\n", i);
        }
        count = 0;
    }

    return 0;
}