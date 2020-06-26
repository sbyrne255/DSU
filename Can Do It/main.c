#include <stdio.h>
#include <stdlib.h>
/*H**********************************************************************
* FILENAME :        main.c             DESIGN REF: NA
*
* DESCRIPTION :
*       DSU PROGRAMMING ASSIGNMENT 2, WEEK 2, PROGRAM IS REQUIRED TO TAKE AGE AS AN INPUT AND CHECK IF THEY ARE LEGAL AGE TO DRINK AND OR VOTE.
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
    //User's input.
    int age;
    //Age allowed to vote (inclusive).
    int voting_age = 18;
    //Age allowed to drink/purchase alcohol (inclusive).
    int drinking_age = 21;
    //Used for exit condition of loop.
    int exit = 0;
    while(exit == 0){
        printf("Enter your age and we will determine if you are legally allowed to vote and or drink.\n");
        printf("Enter Age: ");
        if(scanf("%d", &age) == 1 && age > 0){
            clear_stdin_buffer();
            //IF we know that drinking age will always be older than voting age we could combine in one statement that checks
            //The drinking age and confirms both if equal or greater, if less checks voting age.
            if(age >= drinking_age){ printf("You are legally allowed to drink!\n"); }
            else { printf("You are not of legal age to drink.\n"); }
            if(age >= voting_age){ printf("You are legally allowed to vote!\n"); }
            else {printf("You are not of legal age to vote.\n");}
        } else {
            printf("Please enter a valid age, such as 25.\n");
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
