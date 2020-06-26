#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 100){
        printf("Magenta\n");
    }

    if (x >= 0){
        printf("Red\n");
    }

    if (x%7 == 0){
        printf("Green\n");
    }

    if (x%7 == 0 && x != 49){
        printf("Lime\n");
    }

    if (x >= 30 && x <= 100){
        printf("Blue\n");
    }

    if (x <= 20 || x >= 200){
        printf("Orange\n");
    }

    //Should use hashmap if list size is expected to increase...
    if (x == 22 || x == 33 || x == 44){
        printf("Purple\n");
    }

    //Assumes exclusive as they are ON the range, not IN the range, switch to >= <= for inclusive.
    if ((x > 19 && x < 30) || (x > 44 && x < 58) || (x > 99 && x < 125)){
        printf("Yellow\n");
    }

    if ((x < 20 || x >= 60) || (x >=30 && x < 50)){
        printf("Gold\n");
    }

    if (x == 444){
        printf("Brown\n");
    }

    if (x != 93){
        printf("Gray\n");
    }
}
