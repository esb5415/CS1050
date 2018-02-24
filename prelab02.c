/*Very simple calculator*/
#include <stdio.h>

int main( void )
{
    int num1;
    int num2;
    int add;
    int mult;

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

    printf( "ADDITION: \n" );
    printf( "The sum of %d and %d is %d \n", num1, num2, add );
    printf( "MULTIPLICATION: \n" );
    printf( "The product of %d and %d is %d \n", num1, num2, mult );

    return (0);

}/*end funtion*/
