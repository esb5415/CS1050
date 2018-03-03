//Evan Buchanan
//esb7cp
//Homework 1
#include <stdio.h>

//These are the function prototypes
void displayMenu1(void);
void displayMenu2(void);
int errorCheck(int);
int errorCheckUnits(int);
float getRate(int, int);
int charge(int);
int bonus(int);

void displayMenu1(void) //Displays the menu for the connection type
{
    printf ("\n1. Residential\n2. Commercial\n3. Industrial\n\nPlease choose connection type: ");
}
void displayMenu2(void) //Displays the menu for the units
{
    printf ("\nPlease enter the number of units of electricity consumed (in kWh): ");
}
int errorCheck (int option) //Error checks the menu choice
{
    if (option < 1 || option > 3)
    {
        printf ("\nERROR! Please select a valid connection type!\n");
        return 0;
    }
    else return 1;
}
int errorCheckUnits (int units) //Error checks the units
{
    if (units <= 0)
    {
        printf ("\nERROR! Please enter a positive value for units consumed!\n");
        return 0;
    }
    else return 1;
}
float getRate (int option, int units)
{
    float rate;
    if (option == 1)
    {
        if (units > 0 && units <= 300) rate = 0.075;
        if (units > 300 && units <= 750) rate = 0.100;
        if (units > 750 && units <= 1500) rate = 0.135;
        if (units > 1500) rate = 0.150;
    }
    if (option == 2)
    {
        if (units > 0 && units <= 300) rate = 0.105;
        if (units > 300 && units <= 750) rate = 0.140;
        if (units > 750 && units <= 1500) rate = 0.175;
        if (units > 1500) rate = 0.200;
    }
    if (option == 3)
    {
        if (units > 0 && units <= 300) rate = 0.365;
        if (units > 300 && units <= 750) rate = 0.400;
        if (units > 750 && units <= 1500) rate = 0.455;
        if (units > 1500) rate = 0.500;
    }
    return rate;
}
int charge (int option)
{
    int flatFee;
    if (option == 1) flatFee = 25;
    if (option == 2) flatFee = 90;
    if (option == 3) flatFee = 850;
    return flatFee;
}
int bonus (int num1)
{
    int num2, sum = 0, sumEven = 0, sumOdd = 0;
    printf ("\nThe numbers you wish to add are ");
    for (num2=1; num2 <= num1; ++num2)
    {
        sum = sum + num2;
        printf (" %d ", num2);
        if (num2 % 2 == 0)
        {
            sumEven = sumEven + num2;
        }
        else
        {
            sumOdd = sumOdd + num2;
        }
    }
    printf ("\nThe sum of all numbers 0 to %d is %d.\n", num1, sum);
    printf ("Sum of even numbers: %d.\n", sumEven);
    printf ("Sum of odd numbers: %d.\n", sumOdd);
    return 0;
}
int main (void)
{
    printf ("\n*****ELECTRICITY BILL CALCULATOR*****\n");
    int option, units, check = 0, flatFee, loop = 1;
    float rate, rate2, subtotal, total;
    while (loop == 1)
    {
        while (check == 0)
        {
            displayMenu1();
            scanf("%d", &option);
            check = errorCheck (option);
        }
        check = 0;
        while (check == 0)
        {
            displayMenu2();
            scanf("%d", &units);
            check = errorCheckUnits (units);
        }
        check = 0;
        rate = getRate (option, units);
        rate2 = rate * units;
        printf ("\nYour rate is $%.2f.", rate2);
        flatFee = charge (option);
        printf ("\nYour flat fee is $%d.", flatFee);
        subtotal = rate2 + flatFee;
        total = subtotal + total;
        printf ("\nYour subtotal is $%.2f.", subtotal);
        printf ("\nDo you want to calculate again? 1 for yes, 0 for no: ");
        scanf ("%d", &loop);
    }
    printf ("\nYour total bill due is %.2f.\n", total);
    printf ("\n\n\n*****BONUS*****");
    printf("\nPlease enter a positive number: ");
    int num1;
    scanf("%d", &num1);
    while (num1 <= 0)
    {
        printf ("\nERROR! Please enter a positive number!\n");
        printf ("Please enter a positive number: ");
        scanf("%d", &num1);
    }
    bonus(num1);
    printf("\n\n");
    return 0;
}
