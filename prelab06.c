//Evan Buchanan Prelab 6 esb7cp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int errorCheck(int);
void initalize_array(int[], int);
void print_array(int[], int);

int errorCheck(int option)
{
    if (option < 1 || option > 50) 
    {
        printf ("\nInvalid input!Please pick between 1 and 50.\n");
        return 0;
    }
    else return 1;
}
void initalize_array(int array[], int input)
{
    int i;
    for (i = 0; i < input; ++i)
    {
        array[i] = (rand() %10 );
    }
}
void print_array(int array[], int input)
{
    int i;
    for (i = 0; i < input; ++i)
    {
        printf("%d ",array[i]);
    }
    printf("\n\n");
}
int main(void)
{
    srand(time(NULL));
    int input, check = 0;
    while (check == 0)
    {
        printf ("\nEnter the size of the input: ");
        scanf("%d", &input);
        check = errorCheck(input);
    }
    printf("\nInput array 1\n");
    int array1[50]={0};
    initalize_array(array1, input);
    print_array(array1, input);
    return 0;
}
