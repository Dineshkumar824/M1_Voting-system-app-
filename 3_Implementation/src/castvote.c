#include<stdio.h>
#include<stdlib.h>
void castVote(){

    int choice;
    printf("\n \n  Please chooose your Candidate  \n \n");
    printf("\n 1. %s", party_no_1);
    printf("\n 2. %s", party_no_2);
    printf("\n 3. %s", party_no_3);
    printf("\n 4. %s", party_no_4);
    printf("\n 5. %s", "None of the above");

    printf("\n \n Input your choice ( 1 - 4 ) : ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
        vote_Count1++;
        break;
        case 2:
        vote_Count2++;
        break;
        case 3:
        vote_Count3++;
        break;
        case 4:
        vote_Count4++;
        break;
        case 5:
        invalid_votes++;
        break;
        default:
        printf(" \n Error: Wrong Chocie !! Please retry");
            // built in function for holding the screen.
            getchar();
    }
    printf(" \n Thanks for your vote !!");

}
