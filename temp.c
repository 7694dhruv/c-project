//converts temperature from degrees Celsius to Fahrenheit 
// tow varibales "celsius , fahrenheit" 

#include<stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("pls enter celsius temperature:");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5)+32;

    printf("your temperature in fahrenheit is: %.2f", fahrenheit);

    return 0;
}