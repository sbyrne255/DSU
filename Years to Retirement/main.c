#include <stdio.h>
#include <stdlib.h>
/*H**********************************************************************
* FILENAME :        main.c             DESIGN REF: NA
*
* DESCRIPTION :
*       DSU PROGRAMMING ASSIGNMENT 2, WEEK 2, PROGRAM IS REQUIRED TO TAKE AGE AS AN INPUT AND CHECKS YEARS UNTIL 65 (RETIREMENT)
*       IF THEY ARE AT OR ABOVE 65 TELL THEM THEY SHOULD BE RETIRED.
*
* NOTES :
*       This file is part of a DSU assignment completed on 05/30/2020
*       GNU Licensing applied, see more where you got this file or at https://github.com/sbyrne255
*       There are known security vulnerabilities with this code, note-ably the use of scanf without buffer overflow protections
*
* AUTHOR :    Steven Byrne        START DATE :    30 May 20
*
**********************************************************************H*/
int main()
{
    //Age at which the person should retire.
    int retirement_age = 65;
    //Age of the person (input).
    int age;
    //Used for exit condition.
    int exit = 0;

    while(exit == 0){
        printf("Enter your age to see how many years until retirement: ");
        if(scanf("%d", &age) == 1 && age > 0){
            clear_stdin_buffer();
            if(age >= retirement_age){printf("You should already be retired, slacker.\n");
            } else {
                printf("In %d year(s) you will be able to retire.\n", (retirement_age - age));
            }
        }
        else{
            printf("Please enter a valid age that is greater than 0.\n");
            clear_stdin_buffer();
            continue;
        }
        printf("Would you like to check another person's age (0) or exit (1-9)? \n");
        scanf("%d", &exit);
        clear_stdin_buffer();
    }
    return 0;
}
void clear_stdin_buffer(){
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
