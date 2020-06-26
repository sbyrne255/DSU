#include <stdio.h>
#include <stdlib.h>
/*H**********************************************************************
* FILENAME :        main.c             DESIGN REF:  ProgLoop2.docx
*
* DESCRIPTION :
*       DSU PROGRAMMING ASSIGNMENT LOOPS2-b.
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
    int dice_1, dice_2, sum;
    int running_total = 0, doubles_rolled = 0;

    printf("Please enter a seed value: ");
    scanf("%d", &seed);

    printf("Please enter the number of rolls: ");
    scanf("%d", &rolls);

    srand(seed);
    for(int i = 1; i<=rolls; i++){
        dice_1 = (rand() % 10) + 1;
        dice_2 = (rand() % 10) + 1;
        sum = dice_1 + dice_2;
        if(rolls <= 10){
            //without printing
            printf("%d | %d\n", dice_1, dice_2);
        }
        if(sum == 15){running_total ++;}
        if(dice_1 == dice_2){doubles_rolled ++;}

    }
    printf("Out of %d rolls, you got\n%d pair(s)\n%d that summed to 15.\n", rolls, doubles_rolled, running_total);
    return 0;
}
