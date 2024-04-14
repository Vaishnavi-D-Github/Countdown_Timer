#include <stdio.h>
#include <time.h>
int main(){
    int seconds=0;
    printf("Seconds:");
    scanf("%d",&seconds);
    while(seconds>0)
    { 
        // Here CLOCKS_PER_SEC gives a time of one second. 
        // CLOCKS_PER_SEC denotes one second.
        // clock_t is a datatype for measuring time in clock ticks. 
        // clock_t is present in time.h header file.
        // clock() gives the current system time.

     clock_t stop = clock() + CLOCKS_PER_SEC;

     while(clock()<stop) { } // While loop will give the necessary interval of one second
     seconds--;

     printf(" \r%d",seconds);
    }
    printf("\nTime's up");
    return 0;
}