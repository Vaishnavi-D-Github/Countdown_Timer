This is a tutorial for the introduction of time.h files.
Note: This is taken from youtube
I have taken a project of making a countdown timer inorder to understand the time.h files.
stdio.h is used to take basic functions such as printf and scanf.
stdio.h is usually the primary header file that we use.
Along with stdio.h we use time.h header file which contains functions related to time.
There is another header file called unistd.h which is similar but we shall know the difference and usage later on.

Following is the algorithm:
1. Header files stdio.h and time.h are declared.
2. The main function is created.
3. The integer seconds is declared and initialised to 0.
4. The print statement is given which contain the string "Seconds:".
5. scanf function will receive the value of the seconds.
6. A while loop is declared that has the condition (seconds>0).
7. The variable 'stop' is declared which belongs to the clock_t datatype.
8. It is initialized to clock() + CLOCKS_PER_SEC.
9. Another while loop id declared with condition (clocks() < stop).
10. Decrement seconds by one.
11. Print statement is stated in the outer loop which is used to print each integer.
12. Print statement is stated after the loopwhich contains the string "Time's up".
13. return statement is given.

Here the clock_t is a datatype in time.h which measures time in clock ticks.
The logic between the whole while loop is that:
When seconds is greater than 0 then we decrement the value of seconds by one in each loop. 
But each loop executes in milliseconds hence inorder to manage the time we make use the functions of time which is in time.h header file. 
The clock_t is the datatype to which the avriable stop is defined. 
The clock() is another function which takes the cuurent system's time. 
CLOCKS_PER_SEC is another function which denotes one second.
If you add CLOCKS_PER_SEC to any time variable you give the variable one second.
Here we add clock() with CLOCKS_PER_SEC indicating that we have added one second to the current system time.
'stop' variable will contain the overall value.
Another while loop is created which contains the condition that the loop executes until clock() < stop.
The difference between clock() and stop is just one second.
Hence the loop will execute only for one second.
After which the second vaiable will be decremented.
The print statement inside the onuter while loop is also eecuted. 
Hence we get the countdown timer.
Here we have given \r which updates the value printed on the screen (overwriting) instead of printing separate integers.
