#include <stdio.h>
#include <stdlib.h>

// total no of the parties
#define total_no_of_parties
#define party_no_1 "A"
#define party_no_2 "B" 
#define party_no_3 "C" 
#define party_no_4 "D

int main(){
    int choice;
    do{
        printf("\n \n #_#_#_#_#_# WELCOME TO ELECTION / VOTING 2022 #_#_#_#_#_#");
        printf("\n \n 1. Cast the Vote.");
        printf("\n \n 2. Find the Vote Count.");
        printf("\n \n 3. Find the Leading Candidate.");
        printf("\n \n 0. Exit.");

        printf("\n \n Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
        castVote();
        break;
        case 2:
        votesCount();
        break;
        case 3:
        getLeadingCandiate();
        break;
        default:
        printf("\n Error: Invalid Choice !!!");
        }

    } while (choice!=0);

getchar();
}
