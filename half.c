// Calculate your half of a restaurant bill

// Provided Code:

// #include <cs50.h>
// #include <stdio.h>

// float half(float bill, float tax, int tip);

// int main(void)
// {
//     float bill_amount = get_float("Bill before tax and tip: ");
//     float tax_percent = get_float("Sale Tax Percent: ");
//     int tip_percent = get_int("Tip percent: ");

//     printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
// }

// // TODO: Complete the function
// float half(float bill, float tax, int tip)
// {
//     return 0.0;
// }

// Solution:

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, float tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    float tip_percent = get_float("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// Calculation for your half of a restaurant bill
float half(float bill, float tax, float tip)
{
    // first attempt to create equation:
    // return ((bill * (tax/100)) + (tip/100) + bill) / 2;

    // Second attempt to create equation:
    // return (bill + (bill * (tax/100)) + (bill * (tip/100))) / 2;

    // Final Equation required changing the tip from an int to a float.
    float bill_with_tax = bill + (bill * (tax / 100));
    return (bill_with_tax + (bill_with_tax * (tip / 100))) / 2;
}
