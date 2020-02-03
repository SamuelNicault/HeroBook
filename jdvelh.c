#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


typedef struct Chapter{
    char desc[120];
    int gold;
    int PV;
    int id[3];
}chapter;

void travel(chapter * vartravel){
    printf("Description : %s\n", (*vartravel).desc);
    printf("Gain (or loss) of gold : %d\n", (*vartravel).gold);
    printf("Gain (or loss) of PV : %d\n", (*vartravel).PV);
    printf("Possible destinations : %d %d %d\n", (*vartravel).id[0],(*vartravel).id[1],(*vartravel).id[2]);
}


int main(){ 
	int destination = 0;

    chapter chapter1 = {"This is the lands of farmers, they give you some gold and rest.", 5, 15, {7, 6, 2} };
    chapter chapter2 = {"This is the lands of fishermens, they give you a job and some rest.", 20, 5, {7, 4, 1} };
    chapter chapter3 = {"This is the mountains, climbing was hard and you founded nothing.", 0, -7, {7, 5, 1} };

	printf("Welcome, welcome adventurer, how would you like to be named ?\n");
 	char nom[20] = { 0 },    /* tableau de 20 caractères pour le nom */
 		 prenom[20] = { 0 }; /* de même pour le prénom */

    scanf( "%19s", nom ); /* le nom de tableau représentant l'adresse de son premier élément pas besoin d'utiliser l'opérateur d'adressage & */
    printf( "So now, I'll call you %s !\n", nom );
    
    printf("You can now travell to one of three possibilities [so choose 1, 2 or 3]\n");
    scanf("%d", &destination);
    switch (destination){

    	case 1 :
    		travel(&chapter1);
    	break;

    	case 2 :
    		travel(&chapter2);
    	break;

    	case 3 :
    		travel(&chapter3);
    	break;

    }
    return 0;
}