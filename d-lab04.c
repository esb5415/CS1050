/*Lab 04*/
//Evan Buchanan esb7cp
#include <stdio.h>

int checkError (int);
int checkEven (int);
int checkPrime (int);
void printMizzou(int);
int smallestLargestSum(int);
int checkError (int num)
{
    int loop;
    if (num <= 0)
    {
        loop = 0;
    }
    else
    {
        loop = 1;
    }
    return loop;
}
int checkEven (int num)
{
    int yy;
    if (num %2 == 0)
    {
        yy = 1;
    }
    else
    {
        yy = 0;
    }
    return yy;
}
int checkPrime (int num)
{
    int isPrime = 1;
    int i = 2;
    for (i = 2; i <=num/2; i++)
    {
        if (num%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
void printMizzou (int num1)
{
    int num2;
    for (num2=1; num2 <= num1; ++num2)
    {
        if (num2 % 3 == 0 && num2 % 5 == 0)
        {
            printf ("MIZZOU, ");
        }
        if (num2 % 3 == 0 && num2 % 5 != 0)
        {
            printf ("MIZ, ");
        }
        if (num2 % 5 == 0 && num2 % 3 != 0)
        {
            printf ("ZOU, ");
        }
        if (num2 % 3 != 0 && num2 % 5 != 0)
        {
            printf ("%d, ", num2);
        }
    }
}
int smallestLargestSum(int num)
{
    int sum=0, first, last;
    last = num % 10;
    first = num;
    while (num >= 10)
    {
        num = num/10;
    }
    first = num;
    sum = first + last;
    return (sum) ;
}
int main (void)
{
    int num1;
    int num2;
    int sum;
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
    if (checkPrime (num1) == 0)
    {
        printf ("\n%d is not a prime number.\n", num1);
    }
    else
    {
        printf ("\n%d is a prime number.\n", num1);
    }
    printf("\n\nPlease enter a second positive number: ");
    scanf ( "%d", &num2);
    while (checkError (num2) == 0)
    {
        printf ("\nPlease enter a positive number: ");
        scanf ("%d", &num2);
    }
    printf ("\nCalling the Mizzou function, the output is:\n\n");
    printMizzou(num2);
    printf ("\n\n");
    printf ("\n\n*****BONUS*****\n\n");
    printf ("The sum of the first and last digits in %d is ", num1);
    sum = smallestLargestSum (num1);
    printf ("%d.", sum);
    printf ("\n\n");
    return 0;
}
