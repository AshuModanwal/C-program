#include<stdio.h>
#include<math.h>
float inch(float dis);
float CM(float dis);
float M(float dis);
float feet(float dis);

int main(){
    float dis;
    printf("Enter the distance to convert: ");
    scanf("%f",&dis);
    inch(dis);
    CM(dis);
    M(dis);
    feet(dis);
    return 0;
}
float inch(float dis){
    float distance = dis*39370;
    printf("Distance of %f in inches is : %f\n",dis, distance);
    return 0;
}
float CM(float dis){
    float distance = dis*100000;
    printf("Distance of %f in Centimeter is : %f\n",dis, distance);
    return 0;
}
float M(float dis){
    float distance = dis*1000;
    printf("Distance of %f in Meter is : %f\n",dis, distance);
    return 0;
}
float feet(float dis){
    float distance = dis*3280.83;
    printf("Distance of %f in feet is : %f\n",dis, distance);
    return 0;
}
