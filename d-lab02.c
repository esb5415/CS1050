/*Evan Buchanan Lab02 2018-02-01*/
/*Simple calculator*/
#include <stdio.h>

int main( void )
{
    int num1;
    int num2;
    int add;
    int mult;
    int sub;
    float div;

    printf( "Please enter a whole, non-negative number: \n" );
    scanf( "%d", &num1 );
    while (num1 < 0 ){
        printf( "Please choose only a whole, non-negative number: \n" );
        scanf( "%d", &num1 );
    }/*end while statement*/
    printf( "Please enter a whole, non-negative number: \n" );
    scanf("%d", &num2 );
    while (num2 < 0 ){
        printf( "Please choose only a whole, non-negative number: \n" );
        scanf( "%d", &num2 );
    }/*end while statement*/

    add = num1 + num2;
    mult = num1 * num2;
    sub = num1 - num2;

    printf( "ADDITION: \n" );
    printf( "The sum of %d and %d is %d \n", num1, num2, add );
    printf( "MULTIPLICATION: \n" );
    printf( "The product of %d and %d is %d \n", num1, num2, mult );
    printf( "SUBTRACTION: \n");
    printf( "The difference between %d and %d is %d \n", num1, num2, sub );
    printf( "DIVISION: \n");
    while (num2 <= 0 ){
        printf( "ERROR. Cannot divide by zero! \n" );
        printf( "Please select a new, non-negative, non-zero integer: \n");
        scanf( "%d", &num2 );
    }
    div = ( float )num1 / num2;
    printf( "%d divided by %d is %.2f \n", num1, num2, div );
    if (num1 < num2)
    {
        printf( "%d is larger than %d \n", num2, num1 );
    }
    else{
        if (num1 > num2)
        {
            printf( "%d is larger than %d \n", num1, num2 );
        }
        else
        {
            printf( "%d is the same number as %d \n", num1, num2 );
        }}
    return (0);

}/*end funtion*/
