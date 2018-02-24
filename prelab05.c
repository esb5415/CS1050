//Evan Buchanan PreLab05

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function prototypes
void drinkMenu(void);
int errorCheck(int);
int calculateRandomNumber(void);

void drinkMenu(void) //Displays the drink menu
{
    printf ("\nWhat would you like to drink?\n");
    printf ("1. Water: free\n");
    printf ("2. Coke: $1.00\n");
    printf ("3. Lemonade: $1.50\n");
    printf ("4. Chocolate Milk: $1.75\n");
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
int calculateRandomNumber(void) //This function, surpriseingly, calculates a random number
{
    srand(time(NULL));
    int r = 1 + (rand() % 25);
    return r;
}
int main(void) //Main
{
    int option;
    int check = 0;
    while (check == 0)
    {
        drinkMenu();
        printf ("\nPlease enter a drink option: ");
        scanf ("%d", &option);
        check = errorCheck(option);
    }
    int random = calculateRandomNumber();
    printf ("\n\nThe random number is %d.\n\n", random);
    return 0;
}
