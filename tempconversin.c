#include<stdio.h>
// #include<ctype.h>
int main(){
char unit;
float temp;
printf("Is the temp in F or C: \n");
scanf("%c",&unit);
if(unit=='C'){
printf("Enter the temp in celcius: \n");
scanf("%f",&temp);
temp = (temp *9/5)+32;
printf("The converted Temp in faranheit is %0.1f\n",temp);
}else if(unit=='F'){

printf("Enter the temp in Faranheit: \n");
scanf("%f",&temp);
temp= ((temp -32)*5)/9;
printf("The converted Temp in celcius is %0.1f\n",temp);

}
else{
printf("%c is not a valid temp unit\n",unit);
}
    return 0;
}
