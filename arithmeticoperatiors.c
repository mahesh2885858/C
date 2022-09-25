#include<stdio.h>
int main(){
    int x = 5;
    int y=2;
    int z= x/y;
    printf("the result is %d\n",z);//result will be two bcz we are reading it as an initiger
    float zf = x/y;
    printf("the result is %f\n",zf);//2.00000 bcz the divider which is y here is an intiger
    //to make the divider a float but don't want to change the type at the declaration see below
    float zfd = x/(float)y;
    printf("result is %f\n",zfd);// now the result is 2.500000
    printf("result is %0.1f\n",zfd);// now the result is 2.5
    // addition ,sub,multi are fairly similar and easy you know houw to do them 
    // just like in js ++ increment by 1 -- decrement by 1

    return 0;
}