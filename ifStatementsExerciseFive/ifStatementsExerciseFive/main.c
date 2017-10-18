//
//  main.c
//  ifStatementsExerciseFive
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    // First set i to 0, you'll forget to do it later
    int i=0
        ,entries = 3;
    // A table is used to avoid redundancy in the code later on.
    // Also an empty variable is created to hold the result
    float n[3]
        ,temp;
    
    // Ask for 3 numbers (decimals allowed)
    // I decided to use a while statement to avoid redundancy
    while (i<entries) {
        printf("Veuillez introduire le nombre numéro %i: \n", i+1);
        scanf("%f",&n[i]);
        i++;
    }
    
    for (i=0; i<entries; i++) {
        for (int j = 0; j<entries; j++) {
            if(n[i]<n[j]){
                //swap
                temp=n[j];
                n[j]=n[i];
                n[i]=temp;
            }
        }
    }
    // Print numbers in ascending order
    for(i=0; i<entries; i++){
        printf("Le nombre numéro %d est: %f \n",i+1, n[i]);
    }
    
    return 0;
}

