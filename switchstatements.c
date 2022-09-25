#include<stdio.h>
int main(){
    //switch is more effiecient alternative to multiple if else statements
    char grade;
    printf("Enter your grad\n");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("Your an A grade student\n");
        break;
    case 'B':
    printf("your an average student\n");
    break;
    default:
    printf("Please enter a valid grade\n");

        break;
    }
    return 0;
}