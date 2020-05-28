#include <stdio.h>
#include <stdlib.h>

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
                if(scanf("%d", &qty) == 1){
                    price = qty * unit_price;
                    printf("    Item Cost (sub-total): %.2f\n", price);
                    printf("    Tax Collected (Tax): %.2f\n", (tax_rate * price) );
                    printf("    Total (Tax and Items): %.2f\n", price + (price*tax_rate));

                    printf("Would you like to calculate another item (0) or exit (1-9)? \n");
                    scanf("%d", &exit);
                }
        } else {
            printf("Please enter a valid price...\n   Prices should be formatted as: 1.29 without special characters (except the decimal). \n   Prices must be greater than 0.\n");
            //Clear invalid character from buffer
            fflush(stdin);
            continue;
        }



    }
    while(exit == 0);
}
