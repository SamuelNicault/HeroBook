#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int gold = 0;
int PV = 100;
typedef struct Chapter{
    char desc[120];
    int index;
    int gold;
    int PV;
    int id[3];
}chapter;

void travel(chapter * vartravel){
    printf("Description : %s\n", (*vartravel).desc);
    printf("Gain (or loss) of gold : %d\n", (*vartravel).gold);
    if((gold + (*vartravel).gold)>=0){
    gold += (*vartravel).gold;
    }
    printf("Gain (or loss) of PV : %d\n", (*vartravel).PV);
    if((PV +(*vartravel).PV) >= 0 && (PV +(*vartravel).PV)<100){
    PV += (*vartravel).PV;
    }
    printf("Possible destinations : %d %d %d\n", (*vartravel).id[0],(*vartravel).id[1],(*vartravel).id[2]);
}


int main(){ 
    int destination = 0;
    int pay = 3;

    chapter chapter1 = {"This is the lands of farmers, they give you some gold and rest.", 1, 5, 15, {7, 6, 2} };
    chapter chapter2 = {"This is the lands of fishermens, they give you a job and some rest.", 2, 20, 5, {7, 4, 1} };
    chapter chapter3 = {"This is the mountains, climbing was hard and you founded nothing.", 5, 0, -7, {7, 5, 1} };
    chapter chapter4 = {"This is the castle, there is a lot of treasure but you were caught stealing.", 4, 50, -5, {1, 6, 2} };
    chapter chapter5 = {"This is the lands of merchants, you could become rich, but you spent your money on drinks.", 3, -10, 10, {3, 6, 2} };
    chapter chapter6 = {"This is the dark forest, it was so scary.", 6, 0, -25, {7, 1, 2} };
    chapter chapter7 = {"You came back to the main menu.", 7, 0, 0, {1, 2, 3} };

    printf("Welcome, welcome adventurer, how would you like to be named ?\n");
    char nom[20] = { 0 },    /* tableau de 20 caractères pour le nom */
         prenom[20] = { 0 }; /* de même pour le prénom */

    scanf( "%19s", nom ); /* le nom de tableau représentant l'adresse de son premier élément pas besoin d'utiliser l'opérateur d'adressage & */
    printf( "So now, I'll call you %s !\n", nom );

    printf("You can now travel, chose a pass [1-7]\n");

    while(PV>=0){
        scanf("%d", &destination);

        switch (destination){

            case 1 :
                travel(&chapter1);
                printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);
                scanf("%d", &destination);
                if( destination==1){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==3 || destination==4 ||destination==5){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }

            break;

            case 2 :
                travel(&chapter2);
                printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);
                scanf("%d", &destination);
                if( destination==2){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==3 || destination==5 ||destination==6){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }

            break;

            case 3 :
                travel(&chapter3);
                printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);
                scanf("%d", &destination);
                if( destination==3){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==2 || destination==4 ||destination==6){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }

            break;

            case 4 :
                
                printf("Do you want to pay taxes ? Yes [1] No [0]");
                scanf("%d", &pay);
                if(gold>25 && pay==1){
                    gold -= 25;
                    travel(&chapter4);
                    printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);
                }

                else if(gold>25 && pay == 0){
                    printf("You have enough gold to pay the guards but don't want to.\n");
                }
                
                else{
                    printf("You don't have enough gold to pay the guards.\n");
                }

                scanf("%d", &destination);
                if( destination==4){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==3 || destination==5 ||destination==7){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }
            break;

            case 5 :
                travel(&chapter5);
                printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);

                scanf("%d", &destination);
                if( destination==5){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==1 || destination==4 ||destination==5){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }

            break;

            case 6 :
                travel(&chapter6);
                printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);

                scanf("%d", &destination);
                if( destination==6){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==3 || destination==4 ||destination==5){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }

            break;

            case 7 :
                travel(&chapter7);
                printf("You have still %d PV\nAnd %d piece of gold\n", PV, gold);

                scanf("%d", &destination);
                if( destination==7){
                    printf("You are allready here\n");
                    scanf("%d", &destination);
                }
                else if( destination==4 || destination==5 ||destination==6){
                    printf("You can't go there from here\n");
                    scanf("%d", &destination);
                }

            break;

        }
    };
    return 0;
}
