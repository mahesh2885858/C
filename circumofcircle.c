#include<stdio.h>
#include<math.h>
int main(){
    const float PI = 3.14;
    float radius;
    printf("Enter the radius of circle\n");
    scanf("%f",&radius);
    float circumference = 2*PI*radius;
    float area = PI*radius*radius;
    printf("The circumference of given circle is %f\n",circumference);
    printf("The are of given circle is %f\n",area);

    return 0;
}