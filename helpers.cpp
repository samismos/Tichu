#include "helpers.h"
#include "player.h"

int numberOfPlayersThatHaveNoCardsLeft(Player players[]){
    // TODO: Implement this function
    int i , counter= 0;
    for( i = 0 ; i <=3 ; i++){
        if( players[i].hasNoCardsLeft() == true ) counter++;
    else continue;
    }
    return counter;
}

bool lastThreePlayersPassedOrHaveNoCardsLeft(Player players[], int playerTurn){
    // TODO: Implement this function
    int i , counter = 0;
    for( i ; i < 4 ; i++){
        if(i == playerTurn) continue;
        else {
            if(players[i].hasStatus("PASSED") || players[i].hasStatus("HASNOCARDSLEFT"))counter++;
        }
    }
    if (counter = 3) return true;
    else return false;
}
