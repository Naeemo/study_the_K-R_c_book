//
// Created by 姜云鹏 on 2020/8/17.
//
#include "stdio.h"

int main() {
    int fahr, celsius;
    int lower = 0, upper = 300, step = 20;

    // print table header, align with \t
    printf("Celsius\tFahrenheit\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        // print table row, align with \t and the length of word "celsius" and "Fahrenheit"
        printf("%7d\t%10d\n", celsius, fahr);
        celsius += step;
    }
}