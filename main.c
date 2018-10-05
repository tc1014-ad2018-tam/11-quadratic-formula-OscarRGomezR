/*
 * Write a program that helps the user to solve a quadratic formula.
 * Here, x is an unknown value and a, b and c are constants, with a not equal to 0.
 * Your program should:
 * Ask the user for the values of the three constants a, b and c.
 * Validate that a is never 0.
 * Validate that the values received are numeric.
 * Make sure that you are able to compute the square root.
 * If that is not possible, report that to the user.
 * Report the values for x (both values).
 * Make use of the standard library functions to solve this problem.
 * Name: Óscar Rubén Gómez Ríos
 * Mail: A01411750@itesm.mx
 * Matricule number: A01411750
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>

int main()
{
    double a, b, c;

    printf("This program gives you the x values of the equations with form: \n\n\tax² + bx + c = 0\n\nYou will have to enter the values of A, B and C.\n\nPlease give me the value of a: ");
    scanf("%lf", &a);

    printf("Give me the value b: ");
    scanf("%lf", &b);

    printf("Give me the value c: ");
    scanf("%lf", &c);

    double det = b * b - ( 4 * a * c );

    if(det < 0 || a)
        printf("Your equation hasn't a real solution or is not a quadratic function");
    else
    {
        double root1, root2;
        if (det == 0
        {
            root1 = -b / (2 * a);
            printf("Your equation only has a value of X and is:: %lf", root1);
        }
        else
        {
            root1 = (-b + sqrt(det)) / (2 * a);
            root2 = (-b - sqrt(det)) / (2 * a);
            printf("Your equation has 2 roots and these are: %f y %f",root1, root2);
        }
    }

    return 0;
}