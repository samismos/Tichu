#include "combination.h"

// TODO: Implement here the methods of Combination
Combination::Combination(){
    numberOfCards = 0;
    cards[0].setValue(0);
    cards[1].setValue(0);
}

void Combination:: addCard(Card card){
    if ( cards[0].getValue() == 0){
        cards[0] = card;
    }
    else cards[1] = card;
    numberOfCards++;
}


Card Combination::getCard(int index){
    return cards[index];
}

int Combination:: getValue() {
    if( cards[0].getValue() >= cards[1].getValue() )
        return cards[0].getValue();
    else return cards[1].getValue();
}

int Combination:: getNumberOfCards(){
    return numberOfCards;
}

bool Combination:: canBePlayed(Combination last){
    if ((getNumberOfCards() == last.getNumberOfCards())&& (getValue() > last.getValue()))
            return true;
            else return false;

}
