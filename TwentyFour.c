
/*
 Author: Hubert Plewa
 Program #1: Twenty-Four
 Stage 1
 8/30/2016
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    /*1 will show all possible cases. 0 will hide them*/
    int showDebug = 0;
    
    
    
    
    srand(time(NULL));
    /* num1-num4 are the 4 numbers to be operated on */
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;
    double num4 = 0.0;
    
    /*ansNum1-4 to store num1-4 in the randomly chosen case*/
    double ansNum1 = 0.0;
    double ansNum2 = 0.0;
    double ansNum3 = 0.0;
    double ansNum4 = 0.0;
    
    /* op1-op3 will be user's choices of operations */
    char op1 = ' ';
    char op2 = ' ';
    char op3 = ' ';
    char op4 = ' ';
    
    /*ansOp1-3 to store the op1-3 in the randomly chosen case*/
    char ansOp1 = ' ';
    char ansOp2 = ' ';
    char ansOp3 = ' ';
    
    
    /*postOp to store value after each operation*/
    double postOp = 0.0;
    
    /* Will randomly decide the case*/
    int rouletteSpin = 0;
    
    /*Keeps the count of each possible case*/
    int counter = 1;
    
    printf("Author: Hubert Plewa\n");
    printf("Program #1: Twenty-Four\n");
    printf("TA: Nilanjana Basu, Tuesday 9-10\n");
    printf("8/30/2016\n");
    
    
    printf("\nWelcome to the game of TwentyFour.  Using each of the four numbers shown\n");
    printf("below exactly once, combine them somehow with the basic mathematical\n");
    printf("operators (+,-,*,/) to get 24\n");
    
    /*Should keep looping the game as long as user enters 'y' at the end of the loop*/
    char play = 'y';
    while (play == 'y' || play == 'Y') {
        
        /*The random number 1-3185 to choose a case*/
        rouletteSpin = ((rand() % 3185)+1);
        
        
        /*Prompting user whether to print all 3185 cases (1), or not print them (0)*/
        fflush(stdin);
        printf("\nWould you like to see every possible case?: (Y/N)\n");
        scanf(" %c", &play);
        if ((play == 'Y') || (play == 'y')) {
            showDebug = 1;
        }
        else {
            showDebug = 0;
        }
        
        
        /*Switch on (1), or off (0)*/
        if (showDebug == 1){
            printf("All possible solutions are:\n");
        }
        
        /*For loop to generate all possible combinations of numbers and operators equal to 24*/
        counter = 1;
        for(num1 = 1; num1<=9; num1++) {
            
            for ( num2 = 1; num2<=9; num2++) {
                
                for(  num3 = 1; num3<=9; num3++) {
                    
                    for(  num4 = 1; num4<=9; num4++) {
                        
                        // Case 1:
                        if( (((num1 + num2) + num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f + %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 2:
                        if( (((num1 + num2) + num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f + %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 3:
                        if( (((num1 + num2) + num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f + %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 4:
                        if( (((num1 + num2) + num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f + %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 5:
                        if( (((num1 + num2) - num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f - %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 6:
                        if( (((num1 + num2) - num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f - %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 7:
                        if( (((num1 + num2) - num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f - %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 8:
                        if( (((num1 + num2) - num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f - %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 9:
                        if( (((num1 + num2) * num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f * %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 10:
                        if( (((num1 + num2) * num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f * %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 11:
                        if( (((num1 + num2) * num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f * %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 12:
                        if( (((num1 + num2) * num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f * %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 13:
                        if( (((num1 + num2) / num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f / %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 14:
                        if( (((num1 + num2) / num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f / %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 15:
                        if( (((num1 + num2) / num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f / %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 16:
                        if( (((num1 + num2) / num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f + %.f / %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '+';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 17:
                        if( (((num1 - num2) + num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f + %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 18:
                        if( (((num1 - num2) + num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f + %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 19:
                        if( (((num1 - num2) + num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f + %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 20:
                        if( (((num1 - num2) + num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f + %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 21:
                        if( (((num1 - num2) - num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f - %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 22:
                        if( (((num1 - num2) - num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f - %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 23:
                        if( (((num1 - num2) - num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f - %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 24:
                        if( (((num1 - num2) - num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f - %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 25:
                        if( (((num1 - num2) * num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f * %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 26:
                        if( (((num1 - num2) * num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f * %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 27:
                        if( (((num1 - num2) * num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f * %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 28:
                        if( (((num1 - num2) * num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f * %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 29:
                        if( (((num1 - num2) / num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f / %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 30:
                        if( (((num1 - num2) / num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f / %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 31:
                        if( (((num1 - num2) / num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f / %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 32:
                        if( (((num1 - num2) / num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f - %.f / %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '-';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 33:
                        if( (((num1 * num2) + num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f + %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 34:
                        if( (((num1 * num2) + num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f + %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 35:
                        if( (((num1 * num2) + num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f + %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 36:
                        if( (((num1 * num2) + num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f + %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 37:
                        if( (((num1 * num2) - num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f - %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 38:
                        if( (((num1 * num2) - num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f - %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 39:
                        if( (((num1 * num2) - num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f - %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 40:
                        if( (((num1 * num2) - num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f - %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 41:
                        if( (((num1 * num2) * num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f * %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 42:
                        if( (((num1 * num2) * num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f * %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 43:
                        if( (((num1 * num2) * num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f * %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 44:
                        if( (((num1 * num2) * num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f * %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 45:
                        if( (((num1 * num2) / num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f / %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 46:
                        if( (((num1 * num2) / num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f / %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 47:
                        if( (((num1 * num2) / num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f / %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 48:
                        if( (((num1 * num2) / num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f * %.f / %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '*';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 49:
                        if( (((num1 / num2) + num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f + %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 50:
                        if( (((num1 / num2) + num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f + %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 51:
                        if( (((num1 / num2) + num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f + %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 52:
                        if( (((num1 / num2) + num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f + %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '+';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 53:
                        if( (((num1 / num2) - num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f - %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 54:
                        if( (((num1 / num2) - num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f - %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 55:
                        if( (((num1 / num2) - num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f - %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 56:
                        if( (((num1 / num2) - num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f - %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '-';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 57:
                        if( (((num1 / num2) * num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f * %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 58:
                        if( (((num1 / num2) * num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f * %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 59:
                        if( (((num1 / num2) * num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f * %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 60:
                        if( (((num1 / num2) * num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f * %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '*';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 61:
                        if( (((num1 / num2) / num3) + num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f / %.f + %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '+';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 62:
                        if( (((num1 / num2) / num3) - num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f / %.f - %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '-';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 63:
                        if( (((num1 / num2) / num3) * num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f / %.f * %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '*';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        
                        // Case 64:
                        if( (((num1 / num2) / num3) / num4) == 24) {
                            if (showDebug == 1) {
                                printf("%d: %.f / %.f / %.f / %.f\n ", counter,num1,num2,num3,num4);
                            }
                            if (rouletteSpin == counter) {
                                ansNum1 = num1;
                                ansOp1 = '/';
                                ansNum2 = num2;
                                ansOp2 = '/';
                                ansNum3 = num3;
                                ansOp3 = '/';
                                ansNum4 = num4;
                            }
                            counter++;
                        }
                        //... and so on ...
                        
                    }//end for ( int num4...
                    
                }//end for ( int num3...
                
            }//end for ( int num2...
            
        }//end for ( int num1...
        //Copying numbers from chosen case to be operated on
        num1 = ansNum1;
        num2 = ansNum2;
        num3 = ansNum3;
        num4 = ansNum4;
        op1 = ansOp1;
        op2 = ansOp2;
        op3 = ansOp3;
        
        if(showDebug == 1) {
            printf("*** End Debug Display ***\n");
        }
        
        /*Always showing the chose case numbers*/
        printf("\nThe numbers to use are: %.f, %.f, %.f, %.f\n", num1, num2, num3, num4);
        
        /*User can choose to see the solution or not*/
        fflush(stdin);
        printf("\nWould you like to see the solution?: (Y/N)\n");
        scanf(" %c", &play);
        if ((play == 'Y') || (play == 'y')) {
            showDebug = 1;
        }
        else {
            showDebug = 0;
        }
        
        /*Showing the solution to case based on user's choice*/
        if (showDebug == 1) {
            printf("\nPuzzle to choose #%d: %.f %c %.f %c %.f %c %.f\n", rouletteSpin, num1, op1, num2, op2, num3, op3, num4);
        }
        
        /* User types in their operators */
        //Looping user's input until it contains the correct characters
        int correctInput = 1;
        while(correctInput != 0) {
            
            printf("\nEnter the three operators to be used (+,-,*, or /):\n");
            
            fflush(stdin);
            scanf(" %c%c%c%c", &op1, &op2, &op3, &op4);
            
            if (op4 != '\n') {
                
                printf("*** Sorry, that input is the wrong length.  Please retry. ***\n");
            }
            else if ((op1 == '+'||op1 == '-'||op1 == '*'||op1 == '/') && (op2 == '+'||op2 =='-'||op2 =='*'||op2 =='/') && (op3 == '+'||op3 == '-'||op3 == '*'||op3 == '/')) {
                
                correctInput = 0;
            }
            
            else {
                
                printf("*** Sorry, invalid characters in input.  Please retry. ***\n");
            }
        }
        
        /* Carrying out the operations. input: num1-num4, op1-op3. output: postOp */
        switch (op1) {
            case '+':
                postOp = num1 + num2;
                break;
            case'-':
                postOp = num1 - num2;
                break;
            case '*':
                postOp = num1 * num2;
                break;
            case '/':
                /* if statement to deal with divide by zero */
                if (num2 == 0) {
                    printf("Cannot divide by 0\n");
                    break;
                }
                else {
                    postOp = num1 / num2;
                    break;
                }
            default:
                printf("You chose an invalid operator\n");
                break;
        }
        
        printf("%.2lf %c %.2lf = %.2lf\n", num1, op1, num2, postOp);
        
        switch (op2) {
            case '+':
                num2 = postOp;
                postOp = postOp + num3;
                break;
            case'-':
                num2 = postOp;
                postOp = postOp - num3;
                break;
            case '*':
                num2 = postOp;
                postOp = postOp * num3;
                break;
            case '/':
                if (num3 == 0) {
                    printf("Cannot divide by 0\n");
                    break;
                }
                else {
                    num2 = postOp;
                    postOp = postOp / num3;
                    break;
                }
            default:
                printf("You chose an invalid operator\n");
                break;
        }
        
        printf("%.2lf %c %.2lf = %.2lf\n", num2, op2, num3, postOp);
        
        switch (op3) {
            case '+':
                num3 = postOp;
                postOp = postOp + num4;
                break;
            case'-':
                num3 = postOp;
                postOp = postOp - num4;
                break;
            case '*':
                num3 = postOp;
                postOp = postOp * num4;
                break;
            case '/':
                if (num4 == 0) {
                    printf("Cannot divide by 0\n");
                    break;
                }
                else {
                    num3 = postOp;
                    postOp = postOp / num4;
                    break;
                }           
            default: 
                printf("You chose an invalid operator\n");
                break;
        }
        
        printf("%.2lf %c %.2lf = %.2lf\n", num3, op3, num4, postOp);
        
        printf("Your answer is %.2lf\n", postOp);   
        
        /*Checking to see if the player got to 24*/
        if (postOp == 24) { 
            printf("\nWell done, genius!\n");
        }
        else {
            printf("\nThat's not 24\n");
        }
        
        /*Should continue the while loop as long as user enters y*/
        fflush(stdin);
        printf("\nWould you like to play again (Y/N): \n");
        scanf(" %c", &play);
        
        if (play != 'y') {
            printf("Thanks for playing.");
        }
    }
    return 0;
}