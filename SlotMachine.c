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

void spin() //assigns reels "symbols"
{
    srand(time(NULL));

    int random = rand() % 12 + 1;
    //printf("The randomly generated value is %d.\n", random);
    char reels[3][10];  //creating a character array of strings with a max length of 10

    //This is for when the user input comes into play
    //When this works, user will input number between a range (number of reels)
    //Then the spins variable will be set to this value
    int numberOfReels = 3; 

    int spins = numberOfReels;

    for(int i = 0; i < spins; i++)
    {
        int random = rand()%12 + 1;
        if(random == 0 || random == 1 || random == 2 )
        {
            strcpy(reels[i], "bell");

        } else if(random == 3 || random == 4 || random == 5) {
            strcpy(reels[i], "orange");
            
        } else if(random == 6 || random == 7 || random == 8){
            strcpy(reels[i], "cherry");

        } else {
            strcpy(reels[i], "horseshoe");

        }
    }
}

//check function that compares symbols on the reels to each other (no matter how many reels)
//check(){}

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
