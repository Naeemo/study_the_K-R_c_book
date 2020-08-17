//
// Created by 姜云鹏 on 2020/8/17.
//

#include "stdio.h"

// Original
//int main() {
//    float fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = (5.0 / 9.0) * (fahr - 32.0);
//        printf("%3.0f %6.1f\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}
//

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // print table header, align with \t
    printf("Fahrenheit\tCelsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // print table row, align with \t and the length of word "Fahrenheit" and "celsius"
        printf("%10.0f\t%7.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}