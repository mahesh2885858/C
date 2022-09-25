#include<stdio.h>
#include<string.h>
int main(){
    char name[25];//25 bytes
    int age;
    printf("what is your name\n");
    // scanf("%s",name);// it will read upto white space after that it wont read
    //to read white spaces we have to use fgets
    fgets(name,25,stdin);//but it will include the new line automatically to remove the default new line 
    // we should import string.h which hellps us with handling withh strings
    name[strlen(name)-1]='\0';
    printf("enter your age\n");
    scanf("%d",&age);
    printf("Hi %s, you are %d years old\n",name,age);

    return 0;
}