//
// Created by kunal sumbly on 27/8/2025.
//
#include  <stdio.h>

int main() {
    int fahrenheit, celsius;
    int lower_temperature, upper_temperature, step;

    lower_temperature=0;
    upper_temperature=300;
    step=20;

    fahrenheit=lower_temperature;

    while (fahrenheit <= upper_temperature) {
        celsius=5*(fahrenheit-32)/9;
        printf("%d\t%d\n",fahrenheit,celsius);
        fahrenheit=fahrenheit+step;
    }

}