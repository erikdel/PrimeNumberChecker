//
//  main.c
//  PrimeNumberChecker
//
//  Created by edl on 2/22/13.
//  Copyright (c) 2013 Erik Lorenzana. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int numCheck = 0;
    int divisibleByCounter = 0;
    printf("Enter a number: \n");
    scanf("%i", &numCheck);
    
    if(numCheck == 1){
        printf("The number 1 is not a prime! A prime number must satisfy two conditions: it should be divisible by 1 and by itself");
    } else {
    if(numCheck < 1){
        printf("Please enter a number greater than 0");
    } else {
        printf("The number %d can be divided by: ", numCheck);
        for(int i = 1; i < numCheck + 1;){
            if(numCheck % i == 0){
                divisibleByCounter++;
                printf("'%d' ", i);
                }
            i++;
        }
        if(divisibleByCounter == 2){
            printf("\nThe number '%d' is a prime! It can only be divided by 1 and %d", numCheck, numCheck);
        } else {
            printf("\nThe number '%d' is not a prime, it has %d divisors", numCheck, divisibleByCounter);
        }
    }
    }
    return 0;
}

