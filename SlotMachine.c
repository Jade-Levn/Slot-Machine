#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
Checklist:
-Include at least 3 functions including main
-Pass an array into a function

Wishlist:
-User can input the number of reels
*/

void spin()
{
    srand(time(NULL));

    int random = rand() % 12 + 1;
    //printf("The randomly generated value is %d.\n", random);
    char reels[3][10];  //creating a character array of strings with a max length of 10

}

int result()
{
    //Returns the result of the spin
}

int reward()
{
    //Calculates the player's reward depending on the result
}

int main()
{
    spin();

    return 0;
}
