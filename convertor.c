//Alier Pech Emmanuel M24B23/039 B28826
#include <stdio.h>

int main() {
    int choice;
    float temp, converted_temp;

    // Display the menu
    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform the conversion based on user choice
    if (choice == 1) {
        // Celsius to Fahrenheit conversion
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted_temp = (temp * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", temp, converted_temp);
    } else if (choice == 2) {
        // Fahrenheit to Celsius conversion
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted_temp = (temp - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius\n", temp, converted_temp);
    } else {
        // Handle invalid choice
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
