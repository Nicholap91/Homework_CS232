/* File: primes.c */
/* Author: Britton Wolfe */
/* Date: July 16, 2009 */
/* This program outputs all the primes in the range given */
/* by the command line arguments */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, const char** argv){

    int lowerBound, upperBound;

    if(argc != 3){
        fprintf(stderr, "USAGE: %s lowerBound upperBound\n", argv[0]);
        return -1;
    }
  
    lowerBound = atoi(argv[1]);
    upperBound = atoi(argv[2]);
  
    if(lowerBound < 1 || upperBound < 1){
        fprintf(stderr, "ERROR: both the lowerBound (%d) and the upperBound (%d)"
	          " must be positive.\n", lowerBound, upperBound);
        return -2;
    }
  
    {
        /* TODO: fill in the code that outputs the prime numbers */
        /*   in the range [lowerBound,upperBound] in ascending order */
        int i, k;
        for (i = lowerBound; i < upperBound; i++){
            int primeFlag = 1;
            // Iterate from 2 to n/2 
            for (k = 2; k <= sqrt(i); k++) { 
  
                // If n is divisible by any number between 
                // 2 and n/2, it is not prime 
                if (i % k == 0 || i % (int)(sqrt(i)) == 0) { 
                primeFlag = 0; 
                break; 
                }
                break; 
            } 
  
        if(i<=1) {primeFlag=0;} 
        else if(i==2) {primeFlag=1;}  
        if (primeFlag == 1) { printf("\n%d", i); } 
           
        }

    return 0;
    }
}
