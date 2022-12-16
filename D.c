#include<stdio.h>
#include<math.h>
int main(){
    float deg, far;
    printf("Enter the temprature in fahrenhiet : ");
    scanf("%f",&far);
    deg = (far-32)*5/9;
    printf("The tempreture in Celcius : %f ",deg);
    return 0;
    
}