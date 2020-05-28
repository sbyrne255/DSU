#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Used to track quantity of current item being listed.
    int radius;
    //Used for exit condition.
    int exit = 0;
    //Used for circle area calculation accuracy.
    float pi = 3.14;

    //Intro to program
    printf("#############################################\n");
    printf("#############################################\n");
    printf("##### Welcome to Area & Perimeter 3000  #####\n");
    printf("#############################################\n");
    do{
        printf("Please enter the radius of a circle as a whole number: ");
        if((scanf("%d", &radius) == 1) && (radius > 0)){


printf("%f\n",radius);fflush(stdin);
            float c_area = (pi * (radius * radius));
printf("%f\n",radius);fflush(stdin);
            float c_circumference = (2 * (pi * radius));
printf("%f\n",radius);fflush(stdin);
            float s_area = (radius * radius);
printf("%f\n",radius);fflush(stdin);
            float s_perimiter = radius * 4;
printf("%f\n",radius);fflush(stdin);
            printf("Circle Information:\n");
            printf("    Area of the circle is: %f\n", c_area);
printf("%f\n",radius);fflush(stdin);
            printf("    Circumference of the circle is: %f\n", c_circumference);
printf("%f\n",radius);fflush(stdin);
            printf("Radius is equal to: %f\n", radius);
printf("%f\n",radius);fflush(stdin);
            /*

            printf("Square Information:\n");
            printf("    Area of the square is: %f\n", s_area);
            printf("    Perimeter of the square is: %f\n", s_perimiter);
*/
            printf("Would you like to calculate another area and perimeter (0) or exit (1-9)? \n");
            scanf("%d", &exit);

        } else {
            printf("Please enter a valid radius...\n   radius should be a whole number (no fractions). \n   Radius must be greater than 0.\n");
            //Clear invalid character from buffer
            fflush(stdin);
            continue;
        }
    }
    while(exit == 0);
}
