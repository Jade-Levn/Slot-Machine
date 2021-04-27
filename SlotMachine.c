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

    //My random number generator
    int random = 0;

    //User will input number between the specifie range (number of reels)
    int numberOfReels = 0; 

    
    printf("Please enter a number between 1 and 9:\n");
    scanf("%d", &numberOfReels);

    //Validation checks
    if(numberOfReels < 1 || numberOfReels > 9) {
        printf("Invalid value. Please enter a number between 1 and 9.\n");
        scanf("%d", &numberOfReels);

    } /*else if(numberOfReels * 1 = NULL) {
        printf("Not a number stupid.\n");
        printf("Please enter a number between 1 and 9:\n");
        scanf("%d", &numberOfReels);

    }*/ //could potentially create a valid variable and do checks against that?
    else {
        printf("You have selected %d reel(s).\n", numberOfReels);
    }

    char reels[numberOfReels][SYMBOL_LENGTH];  //This creates a character array to store the number of symbols needed
    int spins = numberOfReels;
    int separator = 0;

    for(int i = 0; i < spins; i++)
    {
        int random = rand()%12 + 1;
        if(random == 0 || random == 1 || random == 2 ) {
            strcpy(reels[i], "bell");

        } else if(random == 3 || random == 4 || random == 5) {
            strcpy(reels[i], "orange");
            
        } else if(random == 6 || random == 7 || random == 8){
            strcpy(reels[i], "cherry");

        } else {
            strcpy(reels[i], "horseshoe");

        }
    }

    separator = spins - 1;

    for(int i = 0; i < spins; i++)
    {
        printf("%s ", reels[i]);
        printf("- ");
    }

    //To figure out error
}
        // inner for
        // for(int j = 0; j < i; j++)
        // {
        //     printf("- ");
        // }

//check function that compares symbols on the reels to each other (no matter how many reels)

int result()
{
    spin();
    for(int i = 0; i < spins; i++)
    {
        strcmp(reels[i], reels[i+1]);
        if(reels[i] == reels[i+1])
        {
            printf(" Matched ");
        } else 
        {
            printf(" No Match ");
        }

        //why isn't this pushing?
    }
    int gameResult = 0;
    return gameResult;
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
