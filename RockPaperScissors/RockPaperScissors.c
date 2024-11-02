#include <stdio.h>
#include <string.h>

const char* RockPaperScissors(const char* player1, const char* player2) {
    //Checks for invalid input
    if ((strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) ||
        (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0)) {
        return "Invalid";
    }

    //Checks for tie
    if (strcmp(player1, player2) == 0) {
        return "Tie";
    }

    //Checks who won
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }
    else {
        return "Player2";
    }
}

int main() {
    printf("%s\n", RockPaperScissors("Rock", "Scissors"));  //Player 1 win
    printf("%s\n", RockPaperScissors("Paper", "Rock"));     //Player 1 win
    printf("%s\n", RockPaperScissors("Scissors", "Paper")); //Player 1 win
    printf("%s\n", RockPaperScissors("Rock", "Paper"));     //Player 2 win
    printf("%s\n", RockPaperScissors("Rock", "Rock"));      //Tie
    printf("%s\n", RockPaperScissors("Rock", "Water"));     //Invalid Input

    return 0;
}
