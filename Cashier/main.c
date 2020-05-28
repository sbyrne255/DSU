#include <stdio.h>
#include <stdlib.h>
/*H**********************************************************************
* FILENAME :        main.c             DESIGN REF: D-Doc / Cashier
*
* DESCRIPTION :
*       DSU PROGRAMMING ASSIGNMENT 1, WEEK 2, PROGRAM IS REQUIRED TO TAKE AN PRICE AS AN INPUT (FLOAT)
*       AND QUANTITY PURCHASED (INT) AND CALCUATE/DISPLAY THE SUB-TOTAL, TAX, AND TOTAL.
*
* NOTES :
*       This file is part of a DSU assignment completed on 05/28/2020
*       GNU Licensing applied, see more where you got this file or at https://github.com/sbyrne255
*       There are known security vulnerabilities with this code, note-ably the use of scanf without buffer overflow protections
*       There is no protection against input related attacks. The input of INF will result in the output being INF.
*
* AUTHOR :    Steven Byrne        START DATE :    27 May 20
*
**********************************************************************H*/
int main()
{
    //Used to track quantity of current item being listed.
    int qty;
    //Used to track price of current item being listed.
    float unit_price;
    //Price for all items combined (no tax)
    float price;
    //Tax rate (1 is 100%)
    float tax_rate = 0.06;
    //Used for exit condition.
    int exit = 0;

    //Intro to program
    printf("#############################################\n");
    printf("#############################################\n");
    printf("#########  Welcome to Cashier 3000  #########\n");
    printf("#############################################\n");

    do{
        printf("Please enter the price of the item: ");
        if((scanf("%f", &unit_price) == 1) && (unit_price > 0)){
            printf("Enter the quantity you are purchasing: ");
            if(scanf("%d", &qty) == 1 && (qty > 0)){
                price = qty * unit_price;
                printf("    Item Cost (sub-total): %.2f\n", price);
                printf("    Tax Collected (Tax): %.2f\n", (tax_rate * price) );
                printf("    Total (Tax and Items): %.2f\n", price + (price*tax_rate));

                printf("Would you like to calculate another item (0) or exit (1-9)? \n");
                scanf("%d", &exit);
            } else {
                printf("Please enter a valid price...\n   Prices should be formatted as: 1.29 without special characters (except the decimal). \n   Prices must be greater than 0.\n");
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
                continue;
            }
        } else {
            printf("Please enter a valid price...\n   Prices should be formatted as: 1.29 without special characters (except the decimal). \n   Prices must be greater than 0.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }
    }
    while(exit == 0);
}
