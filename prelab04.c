/*Pre Lab 04*/
/*Even, positive number check*/
#include <stdio.h>

int checkError (int);
int checkEven (int);
int checkError (int x)
{
    int loop;
    if (x <= 0)
    {
        loop = 0;
    }
    else
    {
        loop = 1;
    }
    return loop;
}
int checkEven (int y)
{
    int yy;
    if (y %2 == 0)
    {
        yy = 1;
    }
    else
    {
        yy = 0;
    }
    return yy;
}
int main (void)
{
    int num1;
    printf ( "\nPlease enter a positive number: ");
    scanf ( "%d", &num1);
    while (checkError (num1) == 0)
    {
        printf ( "\nPlease enter a positive number: ");
        scanf ( "%d", &num1);
    }
    if (checkEven (num1) == 1)
    {
        printf ( "\n%d is an even number.\n", num1);
    }
    else
    {
        printf ("\n%d is an odd number.\n", num1);
    }
    return 0;
}
