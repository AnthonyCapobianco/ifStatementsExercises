//
//  main.c
//  ifStatementsExerciseSix
//
//  Created by Anthony Capobianco on 21/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int hours[3]
        ,minutes[3]
        ,seconds[3];
    
    for (int i = 0; i<2; i++) {
        printf("Veuillez indiquer le temps numéro %i au format hh:mm:ss\n", i+1);
        scanf("%i:%i:%i",&hours[i],&minutes[i],&seconds[i]);
    }
    
    //I know it's ugly but the exercise is on if statements… So here you go.
    //Sum of hours
    hours[2] = hours[0] + hours[1];
    
    //sum of seconds
    seconds[2] = seconds[0] + seconds[1];
    //if the sum of seconds is greater than or equal to 60 had a minute and remove 60 seconds from the sum
    if (seconds[2] >= 60) {
        minutes[2] ++;
        seconds[2] -= 60;
    }
    //sum of minutes
    minutes[2] = minutes[0] + minutes[1];
    //Same idea than for the seconds. If the sum of mins is >= 60 add an hour and remove 60 min
    if (minutes[2] >= 60) {
        hours[2] ++;
        minutes[2] -= 60;
    }
    
    printf("La somme des deux temps est de: %i heures %i minutes et %i secondes\n", hours[2], minutes[2], seconds[2]);
    return 0;
}
