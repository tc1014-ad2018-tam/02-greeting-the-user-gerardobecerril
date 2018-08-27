/*
 * The program only accepts integers between 9 and 23.
 * It greets the user according to the hour received.
 * If the hour is less than 12 and more than 2, it prints "Good morning!".
 * If the hour is greater than or equals 12, but is less than 19, it prints "Good afternoon!".
 * If the hour is greater than or equals 19 but is less than 22, it says "Good evening!".
 * With every other value, it prints "Good night!".
 *
 * Author: Gerardo González Becerril.
 * Date: August 27, 2018.
 * E-mail: A01411981@itesm.mx
 */

#include <stdio.h> //Imports the stdio.h library.

int main() {

    // Variables.
    int hour;
    char term;

    // Asks for the time of the day.
    printf("Enter the time of the day: ");

    // Gets the input from the user. If it's not an integer, the program terminates itself.
    if (scanf("%i%c", &hour, &term) != 2 || term != '\n') {
        printf("An error has occurred.");
        return 0;
    }


    // If statements to determine the message to be sent according to the input.
    if (hour < 0 || hour > 23) {
        printf("That is not a valid time.");
    } else if (hour > 2 && hour < 12) {
        printf("Good morning!");
    } else if (hour >= 12 && hour < 19) {
        printf("Good afternoon!");
    } else if (hour >= 19 && hour < 22) {
        printf("Good evening!");
    } else {
        printf("Good night!");
    }

    return 0; // Terminates the program.

}