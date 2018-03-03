//Evan Buchanan ESB7CP Lab 05

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function prototypes
void drinkMenu(void);
void displayMenu(void);
void displayReceipt(void);
int errorCheck(int);
int calculateRandomDiscount(void);
float calculateTax(float);
int game (int, int);

void drinkMenu(void) //Displays the drink menu
{
    printf ("\nWhat would you like to drink?\n");
    printf ("1. Water: free\n");
    printf ("2. Coke: $1.00\n");
    printf ("3. Lemonade: $1.50\n");
    printf ("4. Chocolate Milk: $1.75\n");
}
void displayMenu(void)
{
    printf ("\nWhat would you like to eat?\n");
    printf ("1. Cheeseburger: $4.50\n");
    printf ("2. Hotdog: $3.00\n");
    printf ("3. Chicken Strips: $5.00\n");
    printf ("4. Fries and Burger Combo: $7.20\n");
}
void displayReceipt(void)
{
    int i;
    printf ("\nYour receipt number is: ");
    for (i = 1; i < 9; i++)
    {
        int num = 1 + (rand() % 9);
        printf ("%d", num);
    }
    printf ("\n\n");
}
int errorCheck(int option) //Error checks the rink input
{
    if (option <1 || option >4)
    {
        printf ("\nERROR! Please enter a valid option!\n");
        return 0;
    }
    else return 1;
}
int calculateRandomDiscount(void) //This function, surpriseingly, calculates a random number
{
    int r = 1 + (rand() % 25);
    return r;
}
float calculateTax(float price)
{
    float tax;
    if (price <=4)
    {
        tax = price *.1;
    }
    else
    {
        tax = price *0.25;
    }
    return tax;
}
int game (int user, int random)
{
    int num4;
    if (user < random) num4 = 0;
    if (user > random) num4 = 1;
    if (user == random) num4 = 2;
    return num4;
}
int main(void) //Main
{
    int drink;
    int food;
    int check = 0;
    srand(time(NULL));
    while (check == 0)
    {
        drinkMenu();
        printf ("\nPlease enter a drink option: ");
        scanf ("%d", &drink);
        check = errorCheck(drink);
    }
    float subtotal;
    if (drink == 1) subtotal = 0;
    if (drink == 2) subtotal = 1;
    if (drink == 3) subtotal = 1.5;
    if (drink == 4) subtotal = 1.75;
    check = 0;
    while (check == 0)
    {
        displayMenu();
        printf ("\nPlease enter a food option: ");
        scanf ("%d", &food);
        check = errorCheck(food);
    }
    if (food == 1) subtotal = subtotal + 4.5;
    if (food == 2) subtotal = subtotal + 3;
    if (food == 3) subtotal = subtotal + 5;
    if (food == 4) subtotal = subtotal + 7.2;
    printf ("\nThank you for your order! It will be made shortly!\n");
    printf ("\nSubtotal: &%.2f", subtotal);
    float tax = calculateTax (subtotal);
    printf ("\nTaxes: $%.2f", tax);
    float discount = calculateRandomDiscount();
    printf ("\nYou get a random discount of %.0f%% on this meal!", discount);
    discount = discount / 100;
    float total = (tax + subtotal) - ((tax + subtotal)*discount);
    printf ("\nTotal: $ %.2f\n", total);
    displayReceipt();


    printf ("\n\n\n*****BONUS*****\n\n\n");
    printf ("Do you want to play a game? Try to guess the number that I am thinking!\n");
    printf ("Enter in a number between 1 and 25: ");
    int num1, num2;
    scanf ("%d", &num1);
    num2 = (1 + (rand() % 25));
    int num3 = 4;
    while (num3 != 2)
    {
        num3 = game (num1, num2);
        if (num3 == 0)
        {
            printf ("\nYour number is lower than my number!\n");
            printf("\nPlease guess again: ");
            scanf ("%d", &num1);
        }
        if (num3 == 1 )
        {
            printf ("\nYour number is greater than my number!\n");
            printf("\nPlease guess again: ");
            scanf ("%d", &num1);
        }
        if (num3 == 2)
        {
            printf ("\nCongrats! You win!\n");
            break;
        }
    }
    printf("\n\n\n");
    return 0;
}
