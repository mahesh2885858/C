#include<stdio.h>
#include<stdbool.h> //need  to include to use boolean values
int main(){
    // variable =  Allocated space in memory to store a value
    int x; //declaration of a variable, creating a space in memory to store a value
    x=15;//initialization of variable
    int y=16; //both declaration & initialization in one go
    int age=23;// variable data type is intiger
    float gpa = 5.9;// data type is a point number 4 bytes 6-7 digits after decimal %f
    char grade = 'a'; //to store a  single character, we should use single quotation marks here not double
    /*
    a char data type store only one byte that means -128 to =127 the format specifier is %c or %d
    but it can only store number between -128 to +127 for example below example:
    */
   char b= 126;
   printf("the value is %d\n",b);// the output will be "the value is 126"
   printf("the value is %c",b);// the output will be "the value is ~" becuase here we are reading it as a characater which is ~ becuase its assci value is 126
   unsigned char t='m';//1byte(0 to +255) %d jor %c
   printf("the value of unsigned is %c\n",t);
    // to create a string we should create an array of characters
    char name[] = "mahesh";//array of characters here use double quotes
    printf("you are %d years old\n",age);
    // here "%d" is the format specifier that is we want to show an intiger here which is specified by %d
    /*
    to display a character array which is a string %s
    to display a single character variable use %c
    to display a float %f 
       */
 double d=3.141592653598793;//8bytes 15-16 digits after decimal %lf
 bool e=true; // format specifier - %d
 float s=1.35698;
 printf("printing enitre float: %f\n",s);
 printf("printing one digit after decimal: %0.1f\n",s);//1.4
 printf("printing two digits after decimal: %0.2f\n",s);//1.36
 printf("printing three digits after decimal: %0.7f\n",s);//1.3569800
//constant 
const float PI=3.14;//although making name all capital is not neccessary it's just a common practise

    return 0;
}