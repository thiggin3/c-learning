//This replaces constants with user inputs
#include <stdio.h>

int main(void) {

int height, length, width;
float profit;

printf("Enter a whole number for height: ");
scanf("%d", &height);

printf("Enter a whole number for length: ");
scanf("%d", &length);

printf("Enter a whole number for width : ");
scanf("%d", &width);






printf("\nHeight: %d", height);
printf("\nLength: %d", length);
printf("\nWidth : %d", width);
printf("\nVolume: %d", height * length * width);

return 0;

}