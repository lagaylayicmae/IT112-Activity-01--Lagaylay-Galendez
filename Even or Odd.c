#include <stdio.h> // Allows the program to use printf() for displaying output. 

int main() { // The main function where the program starts executing. 
    int number =  7; // Create an integers variables named number and stores the value 7.

    if (number % 2 == 0 ) { // Checks if the numberd is divisible by 2 with no remainder.
         printf("%d is Even\n", number); // Displays the number as Even if the condition is true. 
    } else {
         printf("%d is Odd\n", number); // Displays the number as Odd if the conditions is false. 
    }

    return 0; // Ends the program and indicates that it ran successfully. 
