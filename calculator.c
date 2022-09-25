#include<stdio.h>
int main (){
    char operator;
    float a;
    float b;
    float c;
    printf("Operator: \n");
    scanf("%c",&operator);
    printf("Enter A: \n");
    scanf("%f",&a);
    printf("Enter B: \n");
    scanf("%f",&b);
    switch (operator)
    {
    case '+':
       c= a+b;
       printf("Result: %f\n",c);
        break;
    case '-':
       c= a-b;
       printf("Result: %f\n",c);
        break;
    case '*':
       c= a*b;
       printf("Result: %f\n",c);
        break;
    case '/':
       c= a/b;
       printf("Result: %f\n",c);
        break;
    case '%':
       c= (int)a%(int)b;
       printf("Result: %f\n",c);
        break;
    
    default:
    printf("Please enter a valid operator\n");
        break;
    }

    return 0;

}