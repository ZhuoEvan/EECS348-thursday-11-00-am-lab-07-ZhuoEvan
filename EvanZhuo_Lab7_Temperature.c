//EvanZhuo_Lab7_Temperature.c
#include <stdio.h>

//Celsius to Fahrenheit Converter Function | Created by Me
float celsius_to_fahrenheit(float celsius) {
    return celsius * (9.0/5) + 32; //return the result of the conversion equation
}

//Fahrenheit to Celsius Converter Function | Created by Me
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * (5.0/9); //return the result of the conversion equation
}

//Celsius to Kelvin Converter Function | Created by Me
float celsius_to_kelvin(float celsius) {
    return celsius + 273.15; //return the result of the conversion equation
}

//Kelvin to Celsius Converter Function | Created by Me
float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15; //return the result of the conversion equation
}

//Main Function | Created by Me
int main() {
    float *temp; //Initialize a pointer to temp
    printf("Enter the temperature: "); //Input Message for entering temperature
    scanf("%f", temp); //Input for temperature

}