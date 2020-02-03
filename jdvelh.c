#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){ 
	int destination = 0;

	printf("Welcome, welcome adventurer, how would you like to be named ?\n");
 	char nom[20] = { 0 },    /* tableau de 20 caractères pour le nom */
 		 prenom[20] = { 0 }; /* de même pour le prénom */

    scanf( "%19s", nom ); /* le nom de tableau représentant l'adresse de son premier élément pas besoin d'utiliser l'opérateur d'adressage & */
    printf( "So now, I'll call you %s !\n", nom );
    
    printf("And where would you like to go ?\nThrough the farmlands ? [1]\nThrough the swamps ? [2]\nTo the mountains ? [3]\nTo the sea ? [4]\nTo the castle ? [5]\nThrough the dark forest ? [6]\nReturn to the main ? [7]\n");
    scanf("%d", &destination);
    switch (destination){

    	case 1 :
    		printf("You arrived to the farmlands\n");
    		
    	break;

    	case 2 :
    		printf("You arrived to the swamps\n");
    	break;

    	case 3 :
    		printf("You arrived to the mountains\n");
    	break;

    	case 4 :
    		printf("You arrived to the sea\n");
    	break;

    	case 5 :
    		printf("You arrived to the castle\n");
    	break;

    	case 6 :
    		printf("You arrived to the dark forest\n");
    	break;

    	case 7 :
    		printf("You are back to the main\n");
    	break;
    }
    return 0;
}