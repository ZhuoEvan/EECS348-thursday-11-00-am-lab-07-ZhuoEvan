//football.c
#include <stdio.h>

//New Line Function | Created by Me
void newLine() {
    printf("\n"); //Print new line
}

//Score Calculation Function | Created by Me
void scoreCalc(int score) {
    int loopVar = score/2; //End Loop Condition Variable for optimization
    int scoreSum = 0; //Initialize a sum of the scores
    for (int td_c = 0; td_c <= loopVar; td_c++) { //Go through all touchdown + 2pt combinations
        for (int td_fg = 0; td_fg <= loopVar; td_fg++) { //Go through all touchdown + field goal combinations
            for (int td = 0; td <= loopVar; td++) { //Go through all touchdown combinations
                for (int fg = 0; fg <= loopVar; fg++) { //Go through all 3pt field goal combinations
                    for (int sf = 0; sf <= loopVar; sf++) { //Go through all safety combinations
                        scoreSum = (td_c * 8) + (td_fg * 7) + (td * 6) + (fg * 3) + (sf * 2); //Add up the score result
                        if (scoreSum == score) { //Check if sum equals the score
                            //Print Score Combination if the sum is equal to the score inputted
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_c, td_fg, td, fg, sf);
                        }
                    }
                }
            }
        }
    }
    newLine(); //New Line
}

//Negative Number Check Function | Created by Me
int negativeCheck(int score) {
    if (score < 0) { //Check if the score is lower than 0
        return 1; //return True
    } else {
        return 0; //return False
    }
}

//Main Function | Created by Me
int main() {
    int quit = 0; //Variable to exit the while-loop
    do { //do-while | Used w3schools.com
        int score = 0; //Initialize a score
        printf("Enter 0 or 1 to STOP\nEnter the NFL score: "); //Start Message for Input
        scanf("%d", &score); //Input score
        if (negativeCheck(score) == 1) { //Score is a negative value
            printf("Invalid Input\n Error 001: Negative Score"); //Invalid Input Message
            newLine(), newLine(); //New Line
        } else if (score <= 1) { //Score is 0 or 1
            quit = 1; //Set the exit condition to be true
        } else {
            scoreCalc(score);
        }
    }
    while (quit == 0); //Continue the program until exit condition is met
    printf("The football.c program has been terminated.\n"); //Exit Program Message
}

