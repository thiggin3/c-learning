//This is a program to demostrate how to print variables
#include <stdio.h>

int main(void) {

int height, length, width, volume;
float profit;

height = 8;
length = 12;
width = 10;
volume = height * length * width;
profit = 2150.48f;

printf("--------------------------------------------------------------\n");
printf("The following will be printed with seperate printf statements\n");
printf("Height: %d\n", height);
printf("Length: %d\n", length);
printf("Width:  %d\n", width);
printf("Volume: %d\n", height * length * width);

printf("Profit: $%.2f\n", profit);
printf("---------------------------------------------------------------\n");

printf("*********************************************************************\nThe following will be printed with multiple statemnets in fewer lines\n");
printf("Height: %d\nLength: %d\nWidth : %d\nVolume: %d\n\n", height, length, width, volume);

printf("Profit: $%.2f\n", profit);
printf("*********************************************************************\n");


return 0;
}