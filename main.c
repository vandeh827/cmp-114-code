#include <stdio.h>

// Function to calculate income tax
float calculateIncomeTax(float income) {
    float tax = 0;

    // Define tax brackets and rates
    float bracket1 = 10000;
    float bracket2 = 30000;
    float rate1 = 0.1;
    float rate2 = 0.2;
    float rate3 = 0.3;

    // Calculate tax based on income
    if (income <= bracket1) {
        tax = income * rate1;
    } else if (income <= bracket2) {
        tax = bracket1 * rate1 + (income - bracket1) * rate2;
    } else {
        tax = bracket1 * rate1 + (bracket2 - bracket1) * rate2 + (income - bracket2) * rate3;
    }

    return tax;
}

int main() {
    // Get income from the user
    float income;
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate and display income tax
    float tax = calculateIncomeTax(income);
    printf("Your income tax is: %.2f\n", tax);

    return 0;
}
