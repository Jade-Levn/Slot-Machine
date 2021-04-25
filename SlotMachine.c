#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SYMBOL_LENGTH 10

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
    

    //This is for when the user input comes into play
    //When this works, user will input number between a range (number of reels)
    //Then the spins variable will be set to this value
    int numberOfReels = 0; 

    
    printf("Please enter a number between 1 and 9:\n");
    scanf("%d", &numberOfReels);
    printf("You have selected %d reel(s).\n", numberOfReels);

    char reels[numberOfReels][SYMBOL_LENGTH];  //This creates a character array to store the number of symbols needed
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

    for(int i =  0; i < spins; i++)
    {
        printf("%s\n", reels[i]);
    }

    //To figure out error
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
