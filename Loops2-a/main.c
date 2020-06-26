#include <stdio.h>
#include <stdlib.h>
/*H**********************************************************************
* FILENAME :        main.c             DESIGN REF:  ProgLoop2.docx
*
* DESCRIPTION :
*       DSU PROGRAMMING ASSIGNMENT LOOPS2-a.
*
* NOTES :
*       This file is part of a DSU assignment completed on 06/26/2020
*       GNU Licensing applied, see more where you got this file or at https://github.com/sbyrne255
*       There are known security vulnerabilities with this code, note-ably the use of scanf without buffer overflow protections
*       There is no protection against input related attacks. The input of INF will result in the output being INF.
*
* AUTHOR :    Steven Byrne        START DATE :    26 June 20
*
**********************************************************************H*/
int main()
{
    int seed = 8;
    int ones = 0, twos = 0, threes = 0, fours = 0;
    int rolls;
    int number;

    printf("Please enter a seed value: ");
    scanf("%d", &seed);

    printf("Please enter the number of rolls: ");
    scanf("%d", &rolls);

    srand(seed);
    for(int i = 1; i<=rolls; i++){
        number = (rand() % 4) + 1;
        if(rolls <= 10){//It is understood that I did not have to print/limit printing to 10 on this program, I choose to anyways.
            //without printing
            printf("Roll %d was %d\n", i, number);
        }
        if(number == 1){ones ++;}
        else if(number == 2){twos ++;}
        else if(number == 3){threes ++;}
        else if(number == 4){fours ++;}
    }
    printf("Out of %d rolls, you got\n%d one(s)\n%d two(s)\n%d three(s)\n%d four(s)", rolls, ones, twos, threes, fours);
    return 0;
}
