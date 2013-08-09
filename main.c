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
    long numCheck = 0;
    int divisibleByCounter = 2;
    printf("Enter a number: \n");
    scanf("%ld", &numCheck);
    long halfNumCheck = numCheck / 2;
    
    if(numCheck == 1){
        printf("The number 1 is not a prime! A prime number must satisfy two conditions: it should be divisible by 1 and by itself");
    } else {
    if(numCheck < 1){
        printf("Please enter a number greater than 0");
    } else {
        printf("The number %ld can be divided by: \n1", numCheck);
        for(long i = 2; i < halfNumCheck + 1;){
            if(numCheck % i == 0){
                divisibleByCounter++;
                printf("\n%ld", i);
                }
            i++;
        }
        printf("\n%ld", numCheck);
        
        if(divisibleByCounter == 2){
            printf("\nThe number '%ld' is a prime! It can only be divided by 1 and %ld", numCheck, numCheck);
        } else {
            printf("\nThe number '%ld' is not a prime, it has %d divisors", numCheck, divisibleByCounter);
        }
    }
    }
    return 0;
}

