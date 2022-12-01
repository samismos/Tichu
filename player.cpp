#include "player.h"
#include <ctime>
#include <cstdlib>
// TODO: Implement here the methods of Player
// Do not implement the methods addCardToHand, removeCardFromHand, addCardsToBucket
// createHandCombinations, findNumberOfPlayableCombinations, playAnyCombination, play
// These are already implemented in file playercombinations.cpp
// Implement the rest of the methods of Player

Player::Player(int idx){
    index = idx;
    bucketSize = 0;
    status="HASNTPLAYED";
    string Players[4] = {"Player 1", "Player 2", "Player 3", "Player 4"};
    name = Players[index];
}

void Player::setStatus(string newStatus){
    status = newStatus;
}

bool Player::hasStatus(string checkStatus){
    if( status == checkStatus ) return true;
    else return false;
}

string Player::getName(){
    return name;
}

bool Player::hasNoCardsLeft(){
   if(hand.getCardCount() == 0) return true;
   else return false;
}

bool Player::hasMahJong(){
    int a= hand.getCardCount();
    for(int i=0 ; i < a ; i++){
        Card TCard = hand.getCard(i);
        if( TCard.getSuit() == "MAHJONG" )
            return true;
        else continue;
    }
    return false;
}

bool Player::decidePlay(){
    float coin = rand()%1;
    if ( coin < 0.5 ) return true;
    else return false;
}
