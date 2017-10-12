//
//  main.c
//  ifStatementsExerciseOne
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>
int main() {

    float c = 0.0, lpkm, k;
    char plural[2] = {'s','\0'};
    
    //Ask for kilometers traveled
    printf("Veuillez indiquer le nombre de km parcourus:\n");
    scanf("%f", &k);
    //If number of kilometers is at least 100 ask for c else print error and start again
    if (k >= 100) {
        printf("veuillez indiquer la consomation en litres:\n");
        scanf("%f", &c);
    
        //Compute consumption per 100 km
        lpkm = (c/k)*100;
    
        //Print result
        printf("La consomation est %f litre%c au 100 km\n", lpkm,
               //If more than a litre print the plural of the noun
               lpkm>=2?plural[0]:plural[1]
               );
    }else {
        printf("Le nombre de km doit être suppérieur à 100\n");
        main();
    }
    return 0;
}

