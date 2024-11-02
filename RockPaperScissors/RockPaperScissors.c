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

    return 0;
}
