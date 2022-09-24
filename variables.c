#include<stdio.h>
int main(){
    // variable =  Allocated space in memory to store a value
    int x; //declaration of a variable, creating a space in memory to store a value
    x=15;//initialization of variable
    int y=16; //both declaration & initialization in one go
    int age=23;// variable data type is intiger
    float gpa = 5.9;// data type is a point number
    char grade = 'a'; //to store a  single character, we should use single quotation marks here not double
    // to create a string we should create an array of characters
    char name[] = "mahesh";//array of characters here use double quotes
    printf("you are %d years old\n",age);
    // here "%d" is the format specifier that is we want to show an intiger here which is specified by %d
    /*
    to display a character array which is a string %s
    to display a single character variable use %c
    to display a float %f 
       */

    return 0;
}