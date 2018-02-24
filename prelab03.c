/*Pre Lab 3*/
/*Area of square, cube, or cirlce*/
#include <stdio.h>
#include <math.h>

int main (void)
{
    int input;
    float area;
    int length;

    printf ( "Please select\n1 for square\n2 for cube\n3 for circle\n" );
    scanf ("%d", &input);
    while (input != 1 && input != 2 && input != 3)
    {
        printf ( "\nPlease select\n1 for square\n2 for cube\n3 for circle\n" );
        scanf ("%d", &input);
    }
    if (input == 1)
    {
        printf ( "Please enter a whole number side length of the square: " );
        scanf ("%d", &length);
        while (length <= 0)
        {
            printf ( "\nPlease only use whole numbers greater than 0.\n" );
            printf ( "Please enter a new number for the side length:" );
            scanf ("%d", &length);
        }
        area = pow(length, 2);
        printf ( "The area of a square with side length %d is %.2f.\n", length, area);
    }
    else
    {
        if (input == 2)
        {
            printf ( "Please enter the side length of the cube as a whole number: " );
            scanf ("%d", &length);
            while (length <= 0)
            {
                printf ( "\nPlese only use whole numbers greater than 0.\n" );
                printf ( "Please enter a new number for the side length: " );
                scanf ("%d", &length);
            }
            area = pow(length, 2)*6;
            printf ( "The surface area of a cube with side length %d is %.2f.\n", length, area);
        }
        else
        {
            if (input == 3)
            {
                printf ( "Please enter a whole number for the radius of the cirlce: " );
                scanf ("%d", &length);
                while (length <= 0)
                {
                    printf ( "\nPlease only use whole numbers greater than 0.\n" );
                    printf ( "Please enter a new number for the side length: " );
                    scanf ( "%d", &length);
                }
                area =  3.14159 * pow(length, 2);
                printf ("The area of a cirlce with radius %d is %.2f.\n", length, area);
            }
        }
    }
    return (0); }
