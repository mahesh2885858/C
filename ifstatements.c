#include<stdio.h>
int main(){
    int age;
    printf("Please enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("congrats you are signed in\n");

    }
    else if(age<0){
printf("First you have to born and then come here\n");
    }
    else{
        printf("Go home child this place is not for you\n");
    }
    return 0;
}