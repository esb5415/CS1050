//Evan Buchanan
//esb7cp
//Lab 06
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

//Function prototypes
int errorCheck(int);
void initalize_array(int[], int);
void print_array(int[], int);
float average(int[], int);
int max(int[], int);

int errorCheck(int option) //Error checks the input
{
    if (option < 1 || option > 50) 
    {
        printf ("\nInvalid input!Please pick between 1 and 50.\n");
        return 0;
    }
    else return 1;
}
void initalize_array(int array[], int input) //Initalizes the array
{
    int i;
    for (i = 0; i < input; ++i)
    {
        array[i] = (rand() %10 );
    }
}
void print_array(int array[], int input) //Prints the array
{
    int i;
    for (i = 0; i < input; ++i)
    {
        printf("%d ",array[i]);
    }
    printf("\n\n");
}
float average (int array[], int input) //Finds the average of the array
{
    int total = 0, i;
    float mean;
    for (i = 0; i < input; ++i)
    {
        total = total + array[i];
    }
    mean = (float)total/input;
    return mean;
}
int max(int array[], int input) //Finds the largest number in the array
{
    int i = 0, largest = 0, keep;
    for (i = 0; i < input; ++i)
    {
        if (largest < array[i])
        {
            largest = array[i];
            keep = i;
        }
    }
    return keep;
}
int main(void) //Main
{
    srand(time(NULL));
    int input, check = 0, largest;
    float mean;
    while (check == 0)
    {
        printf ("\nEnter the size of the input: ");
        scanf("%d", &input);
        check = errorCheck(input);
    }
    printf("\nInput array 1\n");
    int array1[SIZE]={0};
    initalize_array(array1, input);
    print_array(array1, input);
    mean = average(array1, input);
    largest = max(array1, input);
    printf ("The average of the numbers in the first array is %.2f.\n", mean);
    printf ("\n***Bonus Part***\n");
    printf ("\nThe maximum number is present at the index location %d in the array.\n\n", largest);
    return 0;
}
