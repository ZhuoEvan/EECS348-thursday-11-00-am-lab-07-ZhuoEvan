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

int checkValid(int scale, int convert) {
    if (scale == convert) {
        return 0;
    } else {
        return 1;
    }
}
//Main Function | Created by Me
int main() {
    float *temp; //Initialize a pointer to temp
    int *currScale; //Initialize a pointer to currScale
    int *convertScale; //Initialize a pointer to convertScale

    printf("Enter the temperature: "); //Input Message for entering temperature
    scanf("%f", temp); //Input for temperature
    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: "); //Input Message for entering current scale
    scanf("%d", currScale); //Input for current scale
    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: "); //Input Message for entering convert scale
    scanf("%d", convertScale); //Input for convert scale
    if (checkValid(currScale, convertScale) == 1) {
        print("valid");
    } else {
        printf("invalid");
    }
}