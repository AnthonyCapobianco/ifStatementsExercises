//
//  main.c
//  ifStatementsExerciseOne
//
//  Created by Anthony Capobianco on 10/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    // First set i to 0, you'll forget to do it later
    int i=0;
    // A table is used to avoid redundancy in the code later on.
    // Also an empty variable is screated to hold the result
    float n[i],biggestNumber;
    
    // Ask for 3 numbers (deimals allowed)
    // I decided to use a while statement to avoid redundancy
    while (i<=2) {
        printf("Veuillez introduire le nombre numéro %i: \n", i+1);
        scanf("%f",&n[i]);
        i++;
    }
    
    // Find the biggest number of the 3
    if (n[0] > n[1] && n[1] > n[2]) {
        biggestNumber = n[0];
    }else if (n[0] > n[1] && n[2] > n[0]){
        biggestNumber = n[2];
    }else{
        biggestNumber = n[1];
    }
    
    // Print the biggest number
    printf("Le numéro le plus grand est: %f \n", biggestNumber);
    
    return 0;
}
