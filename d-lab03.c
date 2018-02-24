/*Evan Buchanan*/
/*Lab 03*/
#include <stdio.h>
#include <math.h>

int power (int num1, int num2); /*Function Prototype*/
int main (void)/*Main function*/
{
    /*These are the variables*/
    int bankacc;
    int loop;
    float amount;
    int year;
    float amountci;
    float interest;

    loop = 1;
    while(loop==1)/*So that you can redo the calculation later*/
    {
        /*Bank account type*/
        printf ( "\nPlease select bank account type.\n1 for Checking Account\n2 for Savings Account\n3 for Fixed Deposit\n\n" );
        scanf ("%d", &bankacc);
        while (bankacc != 1 && bankacc != 2 && bankacc != 3)
        {
            printf ( "\nPlease select bank account type.\n1 for Checking Account\n2 for Savings Account\n3 for Fixed Deposit\n" );
            scanf ("%d", &bankacc);
        }
        /*Amount of money in your account*/
        printf ( "\nPlease enter amount of money in your account: ");
        scanf ("%f", &amount);
        while (amount <= 0)
        {
            printf ( "\nI know you don't have a lot of money but please only enter a positive number: ");
            scanf ("%f", &amount);
        }
        /*Number of years the money will sit there*/
        printf ( "\nPlease enter the number of years: ");
        scanf ("%d", &year);
        while (year <1 || year >10)
        {
            printf ( "\nIncorrect value, year should be between 1-10.\nEnter a year: ");
            scanf ("%d", &year);
        }
        if (bankacc==1) /*Calculating the interest for a checking account*/
        {
            amountci = amount * (pow(1.01, year));
            interest = amountci - amount;
            printf ( "\nTotal amount after %d years is $%.2f.", year, amountci);
            printf ( "\nTotal interest earned on the amount $%.2f with the rate 1.00%% is $%.2f.", amount, interest);
        }
        if (bankacc==2) /*Calculating the interest for a savings account*/
        {
            amountci = amount * (pow(1.09, year));
            interest = amountci - amount;
            printf ( "\nTotal amount after %d years is $%.2f.", year, amountci);
            printf ( "\nTotal interest earned on the amount $%.2f with the rate 9.00%% is $%.2f.", amount, interest);
        }
        if (bankacc==3) /*Calculating the interest for fixed deposit*/
        {
            amountci = amount * (pow(1.13, year));
            interest = amountci - amount;
            printf ( "\nTotal amount after %d years is $%.2f.", year, amountci);
            printf ( "\nTotal interest earned on the amount $%.2f with the rate 13.00%% is $%.2f.", amount, interest);
        }
        printf ( "\nDo you want to calculate again?\nEnter 0 for no, 1 for yes: "); /*Redo the calculations?*/
        scanf ("%d", &loop);
    }
    return 0; /*End of main*/
}
