#include<stdio.h>
#include<math.h>
int main(){
    float A;
    float B;
    float C;
    printf("Side A: \n");
    scanf("%f",&A);
    printf("Side B: \n");
    scanf("%f",&B);
    // printf("Side C: \n");
    // scanf("%f",&C);
C = sqrt(pow(A,2)+pow(B,2));
    printf("hypo: %f\n",C);
    return 0;
}