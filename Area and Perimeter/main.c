#include <stdio.h>
#include <stdlib.h>
/*H**********************************************************************
* FILENAME :        main.c             DESIGN REF: D-Doc / Code Shape Calc
*
* DESCRIPTION :
*       DSU PROGRAMMING ASSIGNMENT 1, WEEK 2, PROGRAM IS REQUIRED TO TAKE AN INT INPUT
*       AND DISPLAY THE AREA AND CIRCUMFERENCE OF A CIRCLE IF THE INPUT WAS THE RADIUS
*       AND DISPLAY THE AREA AND PERIMETER IF THE INPUT WAS ONE SIDE OF A SQUARE.
*
* NOTES :
*       This file is part of a DSU assignment completed on 05/28/2020
*       GNU Licensing applied, see more where you got this file or at https://github.com/sbyrne255
*       There are known security vulnerabilities with this code, note-ably the use of scanf without buffer overflow protections
*
* AUTHOR :    Steven Byrne        START DATE :    27 May 20
*
**********************************************************************H*/

int main()
{
    //Used as base input, expected to be an int input with float or int output.
    int radius;
    //Used for exit condition.
    int exit = 0;
    //Used for circle area calculation accuracy.
    float pi = 3.14;

    //Intro to program
    printf("#############################################\n");
    printf("#############################################\n");
    printf("######## Welcome to Shape Calc 3000  ########\n");
    printf("#############################################\n");
    do{
        printf("Please enter the radius of a circle as a whole number: ");
        if((scanf("%d", &radius) == 1) && (radius > 0)){//Input is an int that is greater than 0.
            printf("Circle Information:\n");
            printf("    Area of the circle is: %f\n", (float)(pi * (radius * radius)));//Could use POW with a header include, but this works for what we're doing.
            printf("    Circumference of the circle is: %f\n", (float)(2 * (pi * radius)));
            printf("Square Information:\n");
            printf("    Area of the square is: %d\n", radius * radius);
            printf("    Perimeter of the square is: %d\n", radius * 4);

            printf("Would you like to calculate another area and perimeter (0) or exit (1-9)? \n");
            scanf("%d", &exit);

        } else {
            printf("Please enter a valid radius...\n   radius should be a whole number (no fractions). \n   Radius must be greater than 0.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }
    }
    while(exit == 0);
}
