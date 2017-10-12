//
//  main.c
//  ifStatementsExerciseThree
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>
int main(void) {
    float n[2];
    for (int i = 0; i < 2; i++) {
        printf("veuillez insérer le nombre numéro %i:\n", i+1);
        scanf("%f", &n[i]);
    }
    printf("Le nombre le plus grand est %f\n", n[0]>n[1]?n[0]:n[1]);
    return 0;
}
